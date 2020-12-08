#include "withdrawpage.h"
#include "ui_withdrawpage.h"

WithdrawPage::WithdrawPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WithdrawPage)
{
    ui->setupUi(this);

    input_string = "";

    resetInput("", INPUT_NONE, WITHDRAW_SIZE);

    initButtons();
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

    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
    connect(ui->Btn_STOP_3, SIGNAL(pressed()), this, SLOT(stopClick()));
    connect(ui->Btn_Debit, SIGNAL(pressed()), this, SLOT(debitClick()));
    connect(ui->Btn_Credit, SIGNAL(pressed()), this, SLOT(creditClick()));
}

bool WithdrawPage::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusIn)
    {
        if (object == ui->insert_Amount && input_type != WITHDRAW_SIZE)
        {
            resetInput(insert_Amount, INSERT_AMOUNT, WITHDRAW_SIZE);
        }
    }
    return false;
}

void WithdrawPage::debitClick()
{
    QVariantMap nosto = connector->withdrawMoney(100, Account::Debit);
}

void WithdrawPage::creditClick()
{
    QVariantMap nosto = connector->withdrawMoney(100, Account::Credit);
}

void WithdrawPage::digitClick(QString digit)
{
    if (input_string.size() == string_size)
    {
        input_type = INPUT_NONE;
        return;
    }

    input_string += digit;

    ui->insert_Amount->setFocus();
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::resetInput(const QString &text, quint8 _type, quint32 _size)
{
    input_string = text;
    input_type = _type;
    string_size = _size;
}

void WithdrawPage::stopClick()
{
    input_string = "";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::on_insert_20euros_clicked()
{
    input_string = "20";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::on_insert_40euros_clicked()
{
    input_string = "40";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::on_insert_50euros_clicked()
{
    input_string = "50";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::on_insert_80euros_clicked()
{
    input_string = "80";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::on_insert_100euros_clicked()
{
    input_string = "100";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::on_insert_150euros_clicked()
{
    input_string = "150";
    ui->insert_Amount->setText(input_string);
}

void WithdrawPage::setCardInfo(quint32 _card_type)
{
    card_type = _card_type;

    switch(card_type)
    {
        case Account::Debit:
            ui->Btn_Debit->setVisible(true);
            ui->Btn_Credit->setVisible(false);
            break;
        case Account::Credit:
            ui->Btn_Debit->setVisible(false);
            ui->Btn_Credit->setVisible(true);
            break;
        case Account::DebitCredit:
            ui->Btn_Debit->setVisible(true);
            ui->Btn_Credit->setVisible(true);
            break;
    }
}
