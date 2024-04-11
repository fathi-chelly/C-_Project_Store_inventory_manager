#-------------------------------------------------
#
# Project created by QtCreator 2024-01-23T15:02:13
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = MP_VA_Fathi8chelly
TEMPLATE = app
SOURCES += main.cpp\
        mainwindow.cpp \
    userdialog.cpp \
    admindialog.cpp \
    commandesdialog.cpp \
    dbconnexion.cpp \
    commandes.cpp \
    productdialog.cpp \
    produit.cpp \
    qcustomplot.cpp \
    stats.cpp

HEADERS  += mainwindow.h \
    userdialog.h \
    admindialog.h \
    commandesdialog.h \
    dbconnexion.h \
    commandes.h \
    productdialog.h \
    produit.h \
    ui_productdialog.h \
    qcustomplot.h \
    stats.h

FORMS    += mainwindow.ui \
    userdialog.ui \
    admindialog.ui \
    commandesdialog.ui \
    productdialog.ui \
    stats.ui

RESOURCES += \
    Icons.qrc
