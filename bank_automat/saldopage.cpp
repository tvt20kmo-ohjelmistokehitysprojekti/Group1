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
    QVariantMap saldo = connector->getBalance(apikey, 0);
    ui->Label_Saldo->setText(saldo["balance"].toString());
}

void SaldoPage::creditClick()
{
    QVariantMap saldo = connector->getBalance(apikey, 1);
    ui->Label_Saldo->setText(saldo["balance"].toString());
}
