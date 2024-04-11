#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H
#include "ui_admindialog.h"
#include "commandesdialog.h"
#include "productdialog.h"
#include <dbconnexion.h>
#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = 0);
    DBConnexion mydb;
    ~AdminDialog();

private slots:

    void on_Commandes_button_clicked();

    void on_Produit_button_clicked();

private:
    Ui::AdminDialog *ui;
    CommandesDialog* commandialog;
    ProductDialog* productdialog;
};

#endif // ADMINDIALOG_H
