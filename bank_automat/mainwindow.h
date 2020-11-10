#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define CARD_NUMBER_SIZE     6
#define PIN_NUMBER_SIZE      4

#define INPUT_CARD_NUMBER 0
#define INPUT_PIN_CODE    1

#include <QMainWindow>

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

private:
    void initMainButtons();

    Ui::MainWindow *ui;
    QString  input_string;
    quint32  card_number;
    quint32  card_pin;
    quint8   input_type;
    qint32   string_size;
    bool     input_begin;
};
#endif // MAINWINDOW_H
