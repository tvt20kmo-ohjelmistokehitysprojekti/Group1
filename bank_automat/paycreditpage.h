#ifndef PAYCREDITPAGE_H
#define PAYCREDITPAGE_H
#define INPUT_NONE           0
#define WITHDRAW_SIZE       10
#define INPUT_NONE           0
#define INSERT_AMOUNT        10

#include <QWidget>
#include "settings.h"
#include <network.h>
#include <QTimer>
#include <QWidget>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>

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
    void changePage(Page page);

private slots:
    void backClick() {emit changePage(Page::menuPage);}
    void digitClick(QString digit);
    void stopClick();

    void on_insert_20euros_clicked();
    void on_insert_40euros_clicked();
    void on_insert_50euros_clicked();
    void on_insert_80euros_clicked();
    void on_insert_100euros_clicked();
    void on_insert_150euros_clicked();

private:
    void initButtons();
    void resetInput(const QString &text, quint8 _type, quint32 _size);
    bool eventFilter(QObject *object, QEvent *event);




    Ui::PayCreditPage   *ui;
    Network             *connector;
    QTimer              timer;
    QString             input_string;
    QString             insert_Amount;
    quint32             card_type;
    quint8              input_type;
    qint32              string_size;
};

#endif // PAYCREDITPAGE_H
