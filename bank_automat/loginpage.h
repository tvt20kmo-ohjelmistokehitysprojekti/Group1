#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>
#include <QTimer>

#include "settings.h"
#include "network.h"

// vakioiden määrittely

#define CARD_NUMBER_SIZE     6
#define PIN_NUMBER_SIZE      4

#define INPUT_NONE           0
#define INPUT_CARD_NUMBER    1
#define INPUT_PIN_CODE       2

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

    void setNetwork(Network *_connector) {connector = _connector;}  // Network-olion ositteen tallennus

signals:
    void changePage(Page page);                                     // Sivunvaihtosignaali pääikkunalle
    void sendData(const QVariantMap &data);

private slots:
    void digitClick(QString digit);
    void stopClick();
    void okClick();
    void loginClick();
    void hideError();

private:
    void initButtons();
    void resetInput(const QString &text, quint8 _type, quint32 _size);
    bool eventFilter(QObject *object, QEvent *event);

    Ui::LoginPage *ui;
    Network       *connector;
    QTimer        timer;                // Ajastin serverin lähettämän "message"-tekstin näyttämiseen

    QString       input_string;         // merkkijono aktiiviselle kyselylle
    QString       card_number;
    QString       card_pin;
    quint8        input_type;           // aktiivisen kyselyn tyyppi(0 = ei mitään, 1 = kortin numero, 2 = pin koodi)
    qint32        string_size;          // merkkijonon maksimipituus(kortin numero = 6, pin koodi = 4)
    bool          fresh_input;          // boolean kyselyn nollaamiselle
};

#endif // LOGINPAGE_H
