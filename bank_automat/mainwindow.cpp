#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Lähetetään nettiolion osoite muille olioille

    ui->loginPage->setNetwork(&connector);
    ui->saldoPage->setNetwork(&connector);
    ui->withdrawPage->setNetwork(&connector);
    ui->transactPage->setNetwork(&connector);

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

    // Käynnistetään ohjelma kirjautumis-sivulla

    changePage(Page::loginPage);
}

MainWindow::~MainWindow()
{
    // Poistetaan formin olio pois muistista

    delete ui;
    ui = nullptr;
}

void MainWindow::changePage(qint32 page)
{
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

    connector.storeApiKey(data["key"].toString());

    // Lähetetään kortin tyypin tiedot saldosivulle, jotta tiedetään onko kortti
    // debit, credit vai debit+credit tyyppiä ja mitä saldotietoja sillä voi hakea.

    ui->saldoPage->setCardInfo(result["type"].toUInt());
}

void MainWindow::logOut()
{
    // Kirjaudutaan ulos ja lopetetaan ohjelma

    connector.logoutCard();
    this->close();
}
