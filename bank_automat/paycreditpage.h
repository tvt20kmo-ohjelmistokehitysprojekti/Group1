#ifndef PAYCREDITPAGE_H
#define PAYCREDITPAGE_H
#define INPUT_NONE           0

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
    void changePage(Page page);

private slots:
    void backClick() {emit changePage(Page::menuPage);}

private:
    void initButtons();
    void digitClick(QString digit);

    Ui::PayCreditPage *ui;
    Network           *connector;
    QString         input_string;
    quint32         card_type;
    quint8          input_type;
    qint32          string_size;
};

#endif // PAYCREDITPAGE_H
