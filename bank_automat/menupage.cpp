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
}

void MenuPage::logOutClick()
{
    emit logOut();
}
