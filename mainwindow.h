#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Userdialog.h>
#include <Admindialog.h>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <dbconnexion.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    DBConnexion mydb;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    UserDialog * userdialog;
    AdminDialog * admindialog;

};

#endif // MAINWINDOW_H
