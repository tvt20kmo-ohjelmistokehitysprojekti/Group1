#include "paycreditpage.h"
#include "ui_paycreditpage.h"

PayCreditPage::PayCreditPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PayCreditPage)
{
    ui->setupUi(this);
    ui->Label_Error->setVisible(false);

    resetInput();
    initButtons();

    // Määritetään ajastin laskemaan aikaa vain kerran (ei aloiteta uudelleen ajan nollautuessa)
    // ja yhdistetään timeout-signaali hideError-funktioon.

    timer.setSingleShot(true);
    connect(&timer, &QTimer::timeout, this, &PayCreditPage::hideError);
}

PayCreditPage::~PayCreditPage()
{
    delete ui;
}

// Yhdistetään näppäimien signaalit oikeisiin slotteihin

void PayCreditPage::initButtons()
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
    connect(ui->Btn_PayCredit, SIGNAL(pressed()), this, SLOT(payCreditClick()));
}

void PayCreditPage::setCreditInfo()
{
    QVariantMap credit_loan = connector->getBalance(Account::Credit);

    if (credit_loan["balance"].isValid())
    {
        if (credit_loan["balance"].toInt() < 0) ui->Label_CreditSaldo->setStyleSheet("background-color : white; color: red;");
            else ui->Label_CreditSaldo->setStyleSheet("background-color : white; color: green;");

        ui->Label_CreditSaldo->setText(credit_loan["balance"].toString() + "€");
    }
}

void PayCreditPage::hideError()
{
    ui->Label_Error->setVisible(false);
}

void PayCreditPage::digitClick(const QString &digit)
{
    if (input_string.size() == string_size) return;
    if (!fresh_input) resetInput();

    input_string += digit;
    ui->Label_Amount->setText(input_string  + "€");
}
void PayCreditPage::stopClick()
{
    resetInput();
}

void PayCreditPage::resetInput()
{
    input_string = "";
    string_size = INSERT_AMOUNT;
    fresh_input = true;

    ui->Label_Amount->setText(input_string);
}

void PayCreditPage::payCreditClick()
{
    QString amount = ui->Label_Amount->text();
    if (amount == "") return;

    amount.chop(1);

    QVariantMap data = connector->payCredit(amount.toInt());
    setCreditInfo();

    if (data["status"].toBool()) ui->Label_Error->setStyleSheet("color: green");
        else ui->Label_Error->setStyleSheet("color: red");

    resetInput();

    ui->Label_Error->setText(data["message"].toString());
    ui->Label_Error->setVisible(true);
    timer.start(4000);
}

void PayCreditPage::eurosClick(QString amount)
{
    amount.chop(1);
    input_string = amount;
    fresh_input = false;
    ui->Label_Amount->setText(input_string + "€");
}
