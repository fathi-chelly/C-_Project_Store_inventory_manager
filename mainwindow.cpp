#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbconnexion.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixy("./a7a.png");
    int w = ui->pix->width();
    int h = ui->pix->height();
    ui->pix->setPixmap(pixy.scaled(w, h, Qt::KeepAspectRatio));

    if(!mydb.open())
        ui->label_3->setText("Failed to open the database");
    else
        ui->label_3->setText("Connected");
    mydb.close();
}
void MainWindow::on_pushButton_clicked()
{
    QString Username =ui->User->text();
    QString password =ui->Password->text();
    QString role_saisi;
    if(ui->Admin->isChecked())
        role_saisi="admin";
    if(ui->User_2->isChecked())
        role_saisi="user";

    if(!mydb.open())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery qry;
      qry.prepare("select * from Login where User_name='"+Username+"' and PSW='"+password+"' and Role='"+role_saisi+"'");

    if (qry.exec())
    {
        int count=0;
        while(qry.next())
        {count++;}
        if (count >= 1 && role_saisi == "user")
        {
        QMessageBox::information(this,"Login","Username and password is correct ");
        userdialog=new UserDialog(this);
        userdialog->show();
        }
    else if (count >= 1 && role_saisi == "admin")
        {
            QMessageBox::information(this,"Login","Username and password is correct ");
            admindialog=new AdminDialog(this);
            admindialog->show();
        }

     else QMessageBox::warning(this,"Login","Username and password is not correct ");
    }
    mydb.close();
}

