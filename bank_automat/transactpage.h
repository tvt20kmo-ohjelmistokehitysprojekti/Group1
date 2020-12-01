#ifndef TRANSACTPAGE_H
#define TRANSACTPAGE_H

#include <QWidget>

#include "settings.h"
#include <network.h>

namespace Ui {
class TransactPage;
}

class TransactPage : public QWidget
{
    Q_OBJECT

public:
    explicit TransactPage(QWidget *parent = nullptr);
    ~TransactPage();

    void setNetwork(Network *_connector) {connector = _connector;}
    void setCardInfo(quint32 _card_type) {card_type = _card_type;}

signals:
    void changePage(quint32 page);

private slots:
    void backClick() {emit changePage(Page::menuPage);}

private:
    void initButtons();

    Ui::TransactPage *ui;
    Network       *connector;

    quint32        card_type;
};

#endif // TRANSACTPAGE_H
