#ifndef SALDOPAGE_H
#define SALDOPAGE_H

#include <QWidget>

#include "settings.h"
#include "network.h"

namespace Ui {
class SaldoPage;
}

class SaldoPage : public QWidget
{
    Q_OBJECT

public:
    explicit SaldoPage(QWidget *parent = nullptr);
    ~SaldoPage();

    void setNetwork(Network *_connector) {connector = _connector;}  // Network-olion ositteen tallennus
    void setCardInfo(quint32 _card_type);                           // Pankkikortin tyypin tallennus

signals:
    void changePage(Page page);                                     // Sivunvaihtosignaali pääikkunalle

// Funktiot mitä kutsutaan eri nappeja painaessa
private slots:
    void backClick() {emit changePage(Page::menuPage);}
    void debitClick();
    void creditClick();

private:
    void initButtons();

    Ui::SaldoPage *ui;
    Network       *connector;

    quint32        card_type;
};

#endif // SALDOPAGE_H
