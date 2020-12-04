#include "menupage.h"
#include "ui_menupage.h"

MenuPage::MenuPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);

    initButtons();
}

MenuPage::~MenuPage()
{
    delete ui;
}

void MenuPage::initButtons()
{
    connect(ui->Btn_LogOut, SIGNAL(pressed()), this, SLOT(logOutClick()));
    connect(ui->Btn_Saldo, SIGNAL(pressed()), this, SLOT(saldoClick()));
    connect(ui->Btn_Withdraw, SIGNAL(pressed()), this, SLOT(withdrawClick()));
    connect(ui->Btn_Transacts, SIGNAL(pressed()), this, SLOT(transactClick()));
    connect(ui->Btn_PayCredit, SIGNAL(pressed()), this, SLOT(payCreditClick()));
    connect(ui->Btn_Info, SIGNAL(pressed()), this, SLOT(infoClick()));
}

void MenuPage::setCardInfo(quint32 _card_type)
{
    if (_card_type == Account::Credit) ui->Btn_PayCredit->setVisible(false);
        else ui->Btn_PayCredit->setVisible(true);
}

void MenuPage::logOutClick()
{
    emit logOut();
}
