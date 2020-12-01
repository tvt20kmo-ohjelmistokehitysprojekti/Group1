#include "paycreditpage.h"
#include "ui_paycreditpage.h"

PayCreditPage::PayCreditPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PayCreditPage)
{
    ui->setupUi(this);
    initButtons();
}

PayCreditPage::~PayCreditPage()
{
    delete ui;
}

void PayCreditPage::initButtons()
{
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
}
