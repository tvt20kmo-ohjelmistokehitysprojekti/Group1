#include "infopage.h"
#include "ui_infopage.h"

InfoPage::InfoPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoPage)
{
    ui->setupUi(this);
    initButtons();
}

InfoPage::~InfoPage()
{
    delete ui;
}

void InfoPage::initButtons()
{
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
}

void InfoPage::setInfo()
{
    QVariantMap info = connector->getInfo();
    if (info["status"] == false) return;

    QVariantList info_list = info["account_info"].toList();
    if (info_list.isEmpty()) return;

    QVariantMap account_info = info_list[0].toMap();

    info_list = info["card_info"].toList();
    if (info_list.isEmpty()) return;

    QVariantMap card_info = info_list[0].toMap();

    ui->Label_Tilinumero->setText(account_info["number"].toString());
    ui->Label_Tilinimi->setText(account_info["first_name"].toString() + " " + account_info["last_name"].toString());
    ui->Label_Tililuotto->setText(account_info["credit_limit"].toString() + " €");
    ui->Label_Korttinumero->setText(card_info["number"].toString());
    ui->Label_Korttinimi->setText(card_info["first_name"].toString() + " " + card_info["last_name"].toString());

    switch(card_info["type"].toInt())
    {
    case Account::Debit:
        ui->Label_Korttityyppi->setText("DEBIT");
        ui->Label_Korttityyppi->setStyleSheet("background-color : white; color: blue;");
        break;
    case Account::Credit:
        ui->Label_Korttityyppi->setText("CREDIT");
        ui->Label_Korttityyppi->setStyleSheet("background-color : white; color: green;");
        break;
    case Account::DebitCredit:
        ui->Label_Korttityyppi->setText("DEBIT + CREDIT");
        ui->Label_Korttityyppi->setStyleSheet("background-color : white; color: coral;");
        break;
    }
}
