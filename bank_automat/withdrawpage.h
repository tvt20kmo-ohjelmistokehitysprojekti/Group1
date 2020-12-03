#ifndef WITHDRAWPAGE_H
#define WITHDRAWPAGE_H
#define WITHDRAW_SIZE       10

#define INPUT_NONE           0

#define INSERT_AMOUNT        10

#include "settings.h"
#include <network.h>
#include <QTimer>
#include <QWidget>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>

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
    void digitClick(QString digit);
    void backClick() {emit changePage(Page::menuPage);}
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

    Ui::WithdrawPage *ui;
    Network       *connector;
    QTimer        timer;

    QString  input_string;
    QString  insert_Amount;
    quint8   input_type;
    qint32   string_size;


    quint32  card_type;
};

#endif // WITHDRAWPAGE_H
