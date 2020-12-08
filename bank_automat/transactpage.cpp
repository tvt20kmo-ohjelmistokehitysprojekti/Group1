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

void TransactPage::updateTransactText(Account account_type)
{
    QString transactString = "";
    QVariantMap transacts = connector->getTransacts(account_type);

    if (transacts["status"] == false)
    {
        ui->Text_transacts->setHtml("No transacts for account");
        return;
    }

    QVariantList transact_list = transacts["transacts"].toList();

    if (transact_list.isEmpty())
    {
        ui->Text_transacts->setHtml("No transacts for account");
        return;
    }

    Q_FOREACH(const QVariant &tran, transact_list)
    {
        QVariantMap t = tran.toMap();
        qint32 amount = t["amount"].toInt();
        qint32 type = t["account_type"].toUInt();

        transactString += "<font color=\"gray\">" + t["time"].toString();
        switch(type)
        {
            case Account::Debit:
                transactString += "  <font color=\"blue\">Debit &nbsp;";
                break;

            case Account::Credit:
                transactString += "  <font color=\"green\">Credit ";
                break;

            case Account::DebitCredit:
                transactString += "  <font color=\"coral\">Credit Maksu ";
                break;
        }

        if (amount > 0)
        {
            if (type != Account::DebitCredit) transactString += "Pano &nbsp;";
            transactString += "<font color=\"lightgreen\">+" + t["amount"].toString();
        }
        else
        {
            if (type != Account::DebitCredit) transactString += "Nosto ";
            transactString += "<font color=\"red\">" + t["amount"].toString();
        }

        transactString += "€<br>";
    }

    transactString.chop(4);
    ui->Text_transacts->setHtml(transactString);
}
