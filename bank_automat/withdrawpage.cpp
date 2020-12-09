#include "withdrawpage.h"
#include "ui_withdrawpage.h"

WithdrawPage::WithdrawPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WithdrawPage)
{
    ui->setupUi(this);
    ui->Label_Error->setVisible(false);

    resetInput();
    initButtons();

    timer.setSingleShot(true);
    connect(&timer, &QTimer::timeout, this, &WithdrawPage::hideError);
}

WithdrawPage::~WithdrawPage()
{
    delete ui;
}

void WithdrawPage::initButtons()
{
    QList<QPushButton*> temp_list = this->findChildren<QPushButton*>(QRegularExpression("Btn_\\d"));
    for(auto &i: temp_list)
    {
        connect(i, &QPushButton::pressed, this, [=]() {digitClick(i->text());});
    }

    temp_list = this->findChildren<QPushButton*>(QRegularExpression("Btn_InsertEuros\\d"));
    for(auto &i: temp_list)
    {
        connect(i, &QPushButton::pressed, this, [=]() {eurosClick(i->text());});
    }

    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
    connect(ui->Btn_STOP, SIGNAL(pressed()), this, SLOT(stopClick()));
    connect(ui->Btn_WithdrawDebit, &QPushButton::pressed, this, [=]() {withdrawClick(Account::Debit);});
    connect(ui->Btn_WithdrawCredit, &QPushButton::pressed, this, [=]() {withdrawClick(Account::Credit);});
}

void WithdrawPage::withdrawClick(Account type)
{
    QString amount = ui->Label_Amount->text();
    if (amount == "") return;

    amount.chop(1);

    //qDebug() << -(amount.toInt());

    QVariantMap data = connector->withdrawMoney(-(amount.toInt()), type);

    if (data["status"].toBool()) ui->Label_Error->setStyleSheet("color: green");
        else ui->Label_Error->setStyleSheet("color: red");

    resetInput();

    ui->Label_Error->setText(data["message"].toString());
    ui->Label_Error->setVisible(true);
    timer.start(4000);
}

void WithdrawPage::digitClick(const QString &digit)
{
    if (input_string.size() == string_size) return;
    if (!fresh_input) resetInput();

    input_string += digit;
    ui->Label_Amount->setText(input_string  + "€");
}

void WithdrawPage::stopClick()
{
    resetInput();
}

void WithdrawPage::hideError()
{
    ui->Label_Error->setVisible(false);
}

void WithdrawPage::resetInput()
{
    input_string = "";
    string_size = INSERT_AMOUNT;
    fresh_input = true;

    ui->Label_Amount->setText(input_string);
}

void WithdrawPage::eurosClick(QString amount)
{
    amount.chop(1);
    input_string = amount;
    fresh_input = false;
    ui->Label_Amount->setText(input_string + "€");
}

void WithdrawPage::setCardInfo(quint32 _card_type)
{
    card_type = _card_type;

    switch(card_type)
    {
        case Account::Debit:
            ui->Btn_WithdrawDebit->setVisible(true);
            ui->Btn_WithdrawCredit->setVisible(false);
            break;
        case Account::Credit:
            ui->Btn_WithdrawDebit->setVisible(false);
            ui->Btn_WithdrawCredit->setVisible(true);
            break;
        case Account::DebitCredit:
            ui->Btn_WithdrawDebit->setVisible(true);
            ui->Btn_WithdrawCredit->setVisible(true);
            break;
    }
}
