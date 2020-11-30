#include "mainwindow.h"

#include <QtWidgets/QApplication>

#include <QFontDatabase>

=======
//#include <QFontDatabase>

int main(int argc, char *argv[])
{
  //  QFontDatabase fontDB;
   // fontDB.addApplicationFont("/bank_automat/SquadaOne-Regular.ttf");

    QApplication a(argc, argv);

    // Lisätään uusi fontti käytettäväksi
    QFontDatabase::addApplicationFont(":/fonts/SquadaOne");
    a.setFont(QFont("Squada One", 10, QFont::Normal, false));

    MainWindow w;
    w.show();
    return a.exec();
}
