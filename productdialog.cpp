#include "productdialog.h"
#include "ui_productdialog.h"
#include"produit.h"
#include<QString>
#include<QTextStream>
#include<QDebug>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QMessageBox>

ProductDialog::ProductDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductDialog)
{
    ui->setupUi(this);

}

ProductDialog::~ProductDialog()
{
    delete ui;
}

void ProductDialog::on_pushButton_clicked()
{
    Produit p;
       p.set_code_prod(ui->lineEdit->text().toInt());
       p.set_nom_prod(ui->lineEdit_2->text());
       p.set_Description(ui->lineEdit_3->text());
       p.set_Quantite(ui->lineEdit_4->text().toInt());
       p.set_prix_unit(ui->lineEdit_5->text().toFloat());
       p.set_date_exp(QDateTime::fromString(ui->lineEdit_6->text(), "yyyy-MM-dd"));
       if (!(QDateTime::fromString(ui->lineEdit_6->text(), "yyyy-MM-dd")).isValid()) {
           QMessageBox::critical(this, "Conversion Error", "Conversion failed! Date format should be yyyy-MM-dd");
           return;
       }
       p.Ajouter();


     }

void ProductDialog::on_pushButton_2_clicked()
{

    Produit p;
       p.set_code_prod(ui->lineEdit->text().toInt());
       p.set_nom_prod(ui->lineEdit_2->text());
       p.set_Description(ui->lineEdit_3->text());
       p.set_Quantite(ui->lineEdit_4->text().toInt());
       p.set_prix_unit(ui->lineEdit_5->text().toFloat());
       p.set_date_exp(QDateTime::fromString(ui->lineEdit_6->text(), "yyyy-MM-dd"));
       if (!(QDateTime::fromString(ui->lineEdit_6->text(), "yyyy-MM-dd")).isValid()) {
           QMessageBox::critical(this, "Conversion Error", "Conversion failed! Date format should be yyyy-MM-dd");
           return;
       }
       p.Modifier();


}

void ProductDialog::on_pushButton_3_clicked()
{
    Produit p;
      p.set_code_prod(ui->lineEdit->text().toInt());
      p.Supprimer();


}


void ProductDialog::on_pushButton_4_clicked()
{
    /*Produit p;
    modal=p.Load();
    ui->tableView->setModel(modal);*/

    QSqlQueryModel *modal = new QSqlQueryModel();

    Produit p;
    modal = p.Load();
    if(modal)
    {
       ui->tableView->setModel(modal);
       ui->tableView->resizeColumnToContents(1);
       ui->tableView->resizeColumnToContents(5);
       qDebug()<< modal->rowCount();
    }
    else
    {
        qDebug()<<"Failed to load data";
    }


}

void ProductDialog::on_pushButton_5_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->pushButton->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);


}



void ProductDialog::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();
    DBConnexion conn;
    if(!conn.open())
       {
           qDebug()<<"FAILED TO OPEN DATABASE";
           return;

       }
    conn.open();
    QSqlQuery qry ;
    qry.prepare("select * from Produit WHERE code_prod='"+val+"'");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit->setText(qry.value(0).toString());
            ui->lineEdit_2->setText(qry.value(1).toString());
            ui->lineEdit_3->setText(qry.value(2).toString());
            ui->lineEdit_4->setText(qry.value(3).toString());
            ui->lineEdit_5->setText(qry.value(4).toString());
            ui->lineEdit_6->setText(qry.value(5).toString());
        }
        conn.close();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

