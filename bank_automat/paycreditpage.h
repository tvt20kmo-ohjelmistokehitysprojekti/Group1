#ifndef PAYCREDITPAGE_H
#define PAYCREDITPAGE_H

#include <QWidget>

#include "settings.h"
#include <network.h>

namespace Ui {
class PayCreditPage;
}

class PayCreditPage : public QWidget
{
    Q_OBJECT

public:
    explicit PayCreditPage(QWidget *parent = nullptr);
    ~PayCreditPage();

    void setNetwork(Network *_connector) {connector = _connector;}
    void setCardInfo(quint32 _card_type) {card_type = _card_type;}

signals:
    void changePage(quint32 page);

private slots:
    void backClick() {emit changePage(Page::menuPage);}

private:
    void initButtons();

    Ui::PayCreditPage *ui;
    Network           *connector;

    quint32        card_type;
};

#endif // PAYCREDITPAGE_H
