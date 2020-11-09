#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAX_CARD_SIZE     6
#define MAX_PIN_SIZE      4

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

private:
    Ui::MainWindow *ui;
    QString card_string;
    qint32  card_number;
    qint32  card_pin;
    bool    no_string;
};
#endif // MAINWINDOW_H
