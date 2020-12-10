#ifndef PAYCREDITPAGE_H
#define PAYCREDITPAGE_H

#include <QWidget>
#include <QTimer>
#include <QWidget>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>

#include "settings.h"
#include "network.h"

#define INSERT_AMOUNT       10

namespace Ui {
class PayCreditPage;
}

class PayCreditPage : public QWidget
{
    Q_OBJECT

public:
    explicit PayCreditPage(QWidget *parent = nullptr);
    ~PayCreditPage();
    void setNetwork(Network *_connector) {connector = _connector;}  // Network-olion ositteen tallennus
    void setCreditInfo();                                           // Pankkikortin tyypin tallennus

signals:
    void changePage(Page page);                                     // Sivunvaihtosignaali pääikkunalle

// Funktiot mitä kutsutaan eri nappeja painaessa
private slots:
    void backClick() {emit changePage(Page::menuPage);}
    void digitClick(const QString &digit);
    void eurosClick(QString amount);
    void stopClick();
    void payCreditClick();
    void hideError();

private:
    void initButtons();
    void resetInput();

    Ui::PayCreditPage   *ui;
    Network             *connector;
    QTimer              timer;
    QString             input_string;
    quint32             card_type;
    qint32              string_size;
    bool                fresh_input;
};

#endif // PAYCREDITPAGE_H
