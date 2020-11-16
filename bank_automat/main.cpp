#include "mainwindow.h"

#include <QtWidgets/QApplication>
//#include <QFontDatabase>
int main(int argc, char *argv[])
{
  //  QFontDatabase fontDB;
   // fontDB.addApplicationFont("/bank_automat/SquadaOne-Regular.ttf");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
