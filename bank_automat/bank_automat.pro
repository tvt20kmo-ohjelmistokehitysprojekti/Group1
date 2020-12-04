QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    infopage.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    menupage.cpp \
    network.cpp \
    paycreditpage.cpp \
    saldopage.cpp \
    transactpage.cpp \
    withdrawpage.cpp

HEADERS += \
    infopage.h \
    loginpage.h \
    mainwindow.h \
    menupage.h \
    network.h \
    paycreditpage.h \
    saldopage.h \
    settings.h \
    transactpage.h \
    withdrawpage.h

FORMS += \
    infopage.ui \
    loginpage.ui \
    mainwindow.ui \
    menupage.ui \
    paycreditpage.ui \
    saldopage.ui \
    transactpage.ui \
    withdrawpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
