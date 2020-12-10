#ifndef TRANSACTPAGE_H
#define TRANSACTPAGE_H

#include <QWidget>

#include "settings.h"
#include "network.h"

namespace Ui {
class TransactPage;
}

class TransactPage : public QWidget
{
    Q_OBJECT

public:
    explicit TransactPage(QWidget *parent = nullptr);
    ~TransactPage();

    void setNetwork(Network *_connector) {connector = _connector;}  // Network-olion ositteen tallennus
    void setCardInfo(quint32 _card_type) {card_type = _card_type;}  // Pankkikortin tyypin tallennus
    void updateTransactText(Account account_type);

signals:
    void changePage(Page page);                                     // Sivunvaihtosignaali pääikkunalle

private slots:
    void backClick() {emit changePage(Page::menuPage);}

private:
    void initButtons();

    Ui::TransactPage *ui;
    Network       *connector;

    quint32        card_type;
};

#endif // TRANSACTPAGE_H
