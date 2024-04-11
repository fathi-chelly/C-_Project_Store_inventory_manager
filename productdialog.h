#ifndef PRODUCTDIALOG_H
#define PRODUCTDIALOG_H

#include <QDialog>
#include<produit.h>
#include"productdialog.h"
#include"ui_productdialog.h"
#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class ProductDialog;
}

class ProductDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProductDialog(QWidget *parent = 0);
    ~ProductDialog();
    QSqlDatabase prod_db;
    void conClose()
       {
           prod_db.close();
          prod_db.removeDatabase(QSqlDatabase::defaultConnection);
       }
    bool conOpen()
      {
         prod_db=QSqlDatabase::addDatabase("QSQLITE");
          prod_db.setDatabaseName("./Stock.db");

          if(!prod_db.open()){
              qDebug()<<("Failed to open the database");
          return false;
          }
          else{
              qDebug()<<("Connected successfully");
              return true;
  }
    }
          private slots:
              void on_pushButton_clicked();

              void on_pushButton_2_clicked();

              void on_pushButton_3_clicked();

              void on_pushButton_4_clicked();

              void on_pushButton_5_clicked();

              void on_tableView_activated(const QModelIndex &index);



private:
    Ui::ProductDialog *ui;
};

#endif // PRODUCTDIALOG_H




