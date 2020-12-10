#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connector = new Network();

    // Lähetetään nettiolion osoite muille olioille

    ui->loginPage->setNetwork(connector);
    ui->saldoPage->setNetwork(connector);
    ui->withdrawPage->setNetwork(connector);
    ui->transactPage->setNetwork(connector);
    ui->infoPage->setNetwork(connector);
    ui->payCreditPage->setNetwork(connector);

    // Yhdistetään muiden olioiden sivunvaihtosignaali tämän olion sivunvaihtoslottiin,
    // sekä muut tarvittavat signal-slot yhteydet.

    connect(ui->loginPage, &LoginPage::changePage, this, &MainWindow::changePage);
    connect(ui->loginPage, &LoginPage::sendData, this, &MainWindow::storeData);

    connect(ui->menuPage, &MenuPage::changePage, this, &MainWindow::changePage);
    connect(ui->menuPage, &MenuPage::logOut, this, &MainWindow::logOut);

    connect(ui->saldoPage, &SaldoPage::changePage, this, &MainWindow::changePage);

    connect(ui->withdrawPage, &WithdrawPage::changePage, this, &MainWindow::changePage);

    connect(ui->transactPage, &TransactPage::changePage, this, &MainWindow::changePage);

    connect(ui->payCreditPage, &PayCreditPage::changePage, this, &MainWindow::changePage);

    connect(ui->infoPage, &InfoPage::changePage, this, &MainWindow::changePage);

    // Käynnistetään ohjelma kirjautumis-sivulla

    changePage(Page::loginPage);

    // Fastlogin funktiolla voi siirtyä nopeasti halutulle sivulle ilman kirjautumista
    // fastLogin(Page::menuPage, "", "");

    // EncryptPinCode funktiolla voi luoda haluamansa pin koodin tietokantaan tallentamiseksi
    // encryptPinCode("5550");
}

MainWindow::~MainWindow()
{
    // Poistetaan formin olio pois muistista

    delete connector;
    delete ui;

    connector = nullptr;
    ui = nullptr;
}

void MainWindow::fastLogin(Page page, const QString &card_number, const QString &card_pin)
{
    // Kirjaudutaan sisään ja tallennetaan serverin vastaus. Jos kirjautuminen onnistui, siirrytään
    // Halutulle sivulle, muuten avataan kirjautumissivu.

    storeData(connector->loginCard(card_number, card_pin));

    if (data["status"].toBool() == false)
    {
        qDebug() << "Error When Fast Login";
        changePage(Page::loginPage);
    }
    else
    {
        changePage(page);
    }
}

void MainWindow::encryptPinCode(QString pin)
{
    QByteArray psw_salt(pin.toStdString().c_str());
    psw_salt.append("bankmaatti") ;
    QString hashed_password = QCryptographicHash::hash(psw_salt, QCryptographicHash::Sha256).toHex();
    qDebug() << "Encrypted pin code: " <<  hashed_password;
}

void MainWindow::changePage(Page page)
{
    // Kutsutaan vaihdettavan sivun päivitysfunktioita tietojen päivittämiseksi tietokannasta

    switch (page)
    {
        case Page::transactPage:
            ui->transactPage->updateTransactText(Account::DebitCredit);
            break;
        case Page::payCreditPage:
            ui->payCreditPage->setCreditInfo();
            break;
        case Page::infoPage:
            ui->infoPage->setInfo();
            break;
        default:
            break;
    }

    // Vaihdetaan StackedWidgetin indexi osoittamaan haluttua sivua

    ui->stackedWidget->setCurrentIndex(page);
}

void MainWindow::storeData(const QVariantMap &_data)
{
    // Tallennetaan lähetetyt tiedot, jotta niitä voidaan käyttä muillakin olioilla

    data = _data;

    // Muutetaan datan "result"-kohdan tiedot omaan (name => value) QVariantmappiin,
    // jotta niistä saadaan arvot ulos muuttujina.

    QVariantMap result = data["result"].toMap();

    // Lähetetään apikey nettioliolle, jota tarvitaan keskutelussa RestApin kanssa

    connector->storeApiKey(data["key"].toString());

    // Lähetetään kortin tyypin tiedot saldosivulle, jotta tiedetään onko kortti
    // debit, credit vai debit+credit tyyppiä ja mitä saldotietoja sillä voi hakea.

    quint32 card_type = result["type"].toUInt();

    ui->saldoPage->setCardInfo(card_type);
    ui->withdrawPage->setCardInfo(card_type);
    ui->menuPage->setCardInfo(card_type);
}

void MainWindow::logOut()
{
    // Lopetetaan ohjelman suoritus

    this->close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // Kun ohjelma lopetetaan, tarkistetaan ollanko kirjauduttu sisään.
    // Jos ollaan, kirjaudutaan ulos ja lopetetaan ohjelma, muutoin vain lopetetaan ohjelma.

    if (ui->stackedWidget->currentIndex() == Page::loginPage) event->accept();
    else
    {
        connector->logoutCard();
        event->accept();
    }
}
