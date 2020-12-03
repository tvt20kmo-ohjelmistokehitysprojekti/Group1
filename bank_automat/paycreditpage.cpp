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
// MITÄÄN EI TAPAHDU VIELÄ TÄÄLÄ, Kopioin vain loginpagesta nuo näppäinten toiminnot, mutta ne eivät ohjaannut siihen oikeaan labeliin

void PayCreditPage::initButtons()
{
    QList<QPushButton*> temp_list = this->findChildren<QPushButton*>(QRegularExpression("Btn_\\d"));
    for(auto &i: temp_list)
    {
        connect(i, &QPushButton::pressed, this, [=]() {digitClick(i->text());});
    }
    connect(ui->Btn_Takaisin, SIGNAL(pressed()), this, SLOT(backClick()));
}

void PayCreditPage::digitClick(QString digit)
{
    if (input_string.size() == string_size)
    {
        input_type = INPUT_NONE;
        return;
    }

    input_string += digit;
}
