#ifndef SALDOPAGE_H
#define SALDOPAGE_H

#include <QWidget>

#include "settings.h"
#include <network.h>

namespace Ui {
class SaldoPage;
}

class SaldoPage : public QWidget
{
    Q_OBJECT

public:
    explicit SaldoPage(QWidget *parent = nullptr);
    ~SaldoPage();

    void setNetwork(Network *_connector) {connector = _connector;}
    void setCardInfo(const QString &_apikey, quint32 _card_type) {apikey = _apikey, card_type = _card_type;}

signals:
    void changePage(quint32 page);

private slots:
    void backClick() {emit changePage(Page::menuPage);}
    void debitClick();
    void creditClick();

private:
    void initButtons();

    Ui::SaldoPage *ui;
    Network       *connector;

    QString        apikey;
    quint32        card_type;
};

#endif // SALDOPAGE_H
