#include "admindialog.h"
#include "ui_admindialog.h"
#include "dbconnexion.h"

AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    if(!mydb.open())
    {
        ui->label->setText("Failed to open the database");
    }
    else
    {
        ui->label->setText("Connected");

    }
    mydb.close();
}

AdminDialog::~AdminDialog()
{
    delete ui;
}
void AdminDialog::on_Commandes_button_clicked()
{
    if(!mydb.open())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    mydb.close();
    commandialog=new CommandesDialog(this);
    commandialog->show();
}




void AdminDialog::on_Produit_button_clicked()
{
    if(!mydb.open())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    mydb.close();
    productdialog=new ProductDialog(this);
    productdialog->show();
}
