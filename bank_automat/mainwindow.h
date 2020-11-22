#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define CARD_NUMBER_SIZE     6
#define PIN_NUMBER_SIZE      4

#define INPUT_NONE           0
#define INPUT_CARD_NUMBER    1
#define INPUT_PIN_CODE       2

#include <QMainWindow>
#include <QRegularExpression>
#include <QDebug>
#include <QPixmap>

#include "network.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digitClick();
    void stopClick();
    void okClick();
    void loginClick();
    void netWorkRequest(QString request);

    void on_label_4_linkActivated(const QString &link);

private:
    void initMainButtons();
    void resetInput(const QString &text, quint8 _type, quint32 _size);
    bool eventFilter(QObject *object, QEvent *event);

    Ui::MainWindow *ui;
    Network        connector;

    QString  input_string;
    QString  card_number;
    QString  card_pin;
    quint8   input_type;
    qint32   string_size;
};
#endif // MAINWINDOW_H
