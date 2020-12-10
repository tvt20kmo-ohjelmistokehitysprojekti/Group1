#ifndef WITHDRAWPAGE_H
#define WITHDRAWPAGE_H

#include <QTimer>
#include <QWidget>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>

#include "settings.h"
#include "network.h"

#define INSERT_AMOUNT        10

namespace Ui {
class WithdrawPage;
}

class WithdrawPage : public QWidget
{
    Q_OBJECT

public:
    explicit WithdrawPage(QWidget *parent = nullptr);
    ~WithdrawPage();
    void setNetwork(Network *_connector) {connector = _connector;}  // Network-olion ositteen tallennus
    void setCardInfo(quint32 _card_type);                           // Pankkikortin tyypin tallennus

signals:
    void changePage(Page page);                                     // Sivunvaihtosignaali pääikkunalle


// Funktiot mitä kutsutaan eri nappeja painaessa
private slots:
    void backClick() {emit changePage(Page::menuPage);}
    void digitClick(const QString &digit);
    void eurosClick(QString amount);
    void stopClick();
    void withdrawClick(Account type);
    void hideError();

private:
    void initButtons();
    void resetInput();

    Ui::WithdrawPage    *ui;
    Network             *connector;
    QTimer              timer;
    QString             input_string;
    quint32             card_type;
    qint32              string_size;
    bool                fresh_input;
};

#endif // WITHDRAWPAGE_H
