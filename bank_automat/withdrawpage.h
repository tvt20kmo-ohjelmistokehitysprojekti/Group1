#ifndef WITHDRAWPAGE_H
#define WITHDRAWPAGE_H

#include <QWidget>

#include "settings.h"
#include <network.h>

namespace Ui {
class WithdrawPage;
}

class WithdrawPage : public QWidget
{
    Q_OBJECT

public:
    explicit WithdrawPage(QWidget *parent = nullptr);
    ~WithdrawPage();

    void setNetwork(Network *_connector) {connector = _connector;}
    void setCardInfo(quint32 _card_type) {card_type = _card_type;}

signals:
    void changePage(quint32 page);

private slots:
    void backClick() {emit changePage(Page::menuPage);}

private:
    void initButtons();

    Ui::WithdrawPage *ui;
    Network          *connector;

    quint32        card_type;
};

#endif // WITHDRAWPAGE_H
