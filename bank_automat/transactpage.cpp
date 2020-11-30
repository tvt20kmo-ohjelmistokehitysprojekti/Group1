#include "transactpage.h"
#include "ui_transactpage.h"

TransactPage::TransactPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransactPage)
{
    ui->setupUi(this);
    initButtons();
}

TransactPage::~TransactPage()
{
    delete ui;
}

void TransactPage::initButtons()
{
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
}
