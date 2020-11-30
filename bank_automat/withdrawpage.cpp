#include "withdrawpage.h"
#include "ui_withdrawpage.h"

WithdrawPage::WithdrawPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WithdrawPage)
{
    ui->setupUi(this);
    initButtons();
}

WithdrawPage::~WithdrawPage()
{
    delete ui;
}

void WithdrawPage::initButtons()
{
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
}
