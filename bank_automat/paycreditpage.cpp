#include "paycreditpage.h"
#include "ui_paycreditpage.h"
#include "network.h"

PayCreditPage::PayCreditPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PayCreditPage)
{
    ui->setupUi(this);

    input_string = "";

    resetInput("", INPUT_NONE, WITHDRAW_SIZE);

    initButtons();
}
// Vielä pitäisi hakea velka Credit kortilta ja tulostaa se ruudulle, sekä maksaa velkaa käyttäjän määrittämä summa tietokantaan

PayCreditPage::~PayCreditPage()
{
    delete ui;
}
// luetaan mitä näppäintä käyttäjä painaa

void PayCreditPage::initButtons()
{
    QList<QPushButton*> temp_list = this->findChildren<QPushButton*>(QRegularExpression("Btn_\\d"));
    for(auto &i: temp_list)
    {
        connect(i, &QPushButton::pressed, this, [=]() {digitClick(i->text());});
    }
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
    connect(ui->Btn_STOP_3, SIGNAL(pressed()), this, SLOT(stopClick()));
}

bool PayCreditPage::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusIn)
    {
        if (object == ui->insert_Credit_Amount && input_type != WITHDRAW_SIZE)
        {
            resetInput(insert_Amount, INSERT_AMOUNT, WITHDRAW_SIZE);
        }
    }
    return false;
}

void PayCreditPage::digitClick(QString digit)
{
    if (input_string.size() == string_size)
    {
        input_type = INPUT_NONE;
        return;
    }

    input_string += digit;

    ui->insert_Credit_Amount->setFocus();
    ui->insert_Credit_Amount->setText(input_string);
}
void PayCreditPage::stopClick()
{
    input_string = "";
    ui->insert_Credit_Amount->setText(input_string);
}

void PayCreditPage::resetInput(const QString &text, quint8 _type, quint32 _size)
{
    input_string = text;
    input_type = _type;
    string_size = _size;
}
void PayCreditPage::on_payCredit_clicked()
{
    QVariantMap maksu = connector->payCredit(Account::Credit);
}

void PayCreditPage::on_insert_20euros_clicked()
{
    input_string = "20";
    ui->insert_Credit_Amount->setText(input_string);
}

void PayCreditPage::on_insert_40euros_clicked()
{
    input_string = "40";
    ui->insert_Credit_Amount->setText(input_string);
}

void PayCreditPage::on_insert_50euros_clicked()
{
    input_string = "50";
    ui->insert_Credit_Amount->setText(input_string);
}

void PayCreditPage::on_insert_80euros_clicked()
{
    input_string = "80";
    ui->insert_Credit_Amount->setText(input_string);
}

void PayCreditPage::on_insert_100euros_clicked()
{
    input_string = "100";
    ui->insert_Credit_Amount->setText(input_string);
}

void PayCreditPage::on_insert_150euros_clicked()
{
    input_string = "150";
    ui->insert_Credit_Amount->setText(input_string);
}



