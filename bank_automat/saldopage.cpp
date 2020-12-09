#include "saldopage.h"
#include "ui_saldopage.h"

SaldoPage::SaldoPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SaldoPage)
{
    ui->setupUi(this);
    initButtons();
}

SaldoPage::~SaldoPage()
{
    delete ui;
}

void SaldoPage::initButtons()
{
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
    connect(ui->Btn_Debit, SIGNAL(pressed()), this, SLOT(debitClick()));
    connect(ui->Btn_Credit, SIGNAL(pressed()), this, SLOT(creditClick()));
}

void SaldoPage::debitClick()
{
    QVariantMap saldo = connector->getBalance(Account::Debit);
    ui->Label_Saldo->setText(saldo["balance"].toString()  + "€");
}

void SaldoPage::creditClick()
{
    QVariantMap saldo = connector->getBalance(Account::Credit);
    ui->Label_Saldo->setText(saldo["balance"].toString()  + "€");
}

void SaldoPage::setCardInfo(quint32 _card_type)
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
