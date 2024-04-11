#include "commandesdialog.h"
#include "commandes.h"
#include "ui_commandesdialog.h"
#include "ui_productdialog.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <dbconnexion.h>
#include <produit.h>
CommandesDialog::CommandesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommandesDialog)
{
    ui->setupUi(this);
    if(!mydb.open())
    {
        ui->label_4->setText("Failed to open the database");
    }
    else
    {
        ui->label_4->setText("Connected");

    }
    mydb.close();
    QSqlQueryModel * modal=new QSqlQueryModel();
    Produit P;
    modal=P.Load();
    ui->comboBox->setModel(modal);
    ui->comboBox->setCurrentIndex(-1);
    ui->line_prod->setText("");
    ui->lineEdit_3->setText("");
    ui->line_prod_4->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
}


CommandesDialog::~CommandesDialog()
{
    delete ui;
}

void CommandesDialog::on_Save_button_clicked()
{
    mydb.open();
    if(!mydb.open())
    {
        ui->label_4->setText("Failed to open the database");
        return;
    }
    else
    {
        ui->label_4->setText("Connected");

    }
    Commandes c;
    c.setCodeProd(ui->line_prod->text().toInt());
    c.setQtte(ui->line_qtte->text().toInt());
    c.setDate(QDateTime::currentDateTime());
    if (ui->line_qtte->text().toInt()>ui->lineEdit_4->text().toInt())
    {
        QMessageBox::critical(this, "Insufficient Stock", "The available stock quantity is insufficient.");
        return;
    }
    c.Ajouter();
    on_comboBox_currentIndexChanged();
    mydb.close();
}


void CommandesDialog::on_Update_button_clicked()
{
    mydb.open();
    if(!mydb.open())
    {
        ui->label_4->setText("Failed to open the database");
        return;
    }
    else
    {
        ui->label_4->setText("Connected");

    }
    Commandes c;
    c.setCodeCmd(ui->line_cmd->text().toInt());
    c.setCodeProd(ui->line_prod->text().toInt());
    c.setQtte(ui->line_qtte->text().toInt());
    c.setDate(QDateTime::currentDateTime());
    if (ui->line_qtte->text().toInt()>ui->lineEdit_4->text().toInt())
    {
        QMessageBox::critical(this, "Insufficient Stock", "The available stock quantity is insufficient.");
        return;
    }
    c.Update();
    on_comboBox_currentIndexChanged();
    mydb.close();
}


void CommandesDialog::on_Delete_button_clicked()
{
    mydb.open();
    if(!mydb.open())
    {
        ui->label_4->setText("Failed to open the database");
        return;
    }
    else
    {
        ui->label_4->setText("Connected");

    }
    Commandes c;
    c.setCodeCmd(ui->line_cmd->text().toInt());
    c.setCodeProd(ui->line_prod->text().toInt());
    c.setQtte(ui->line_qtte->text().toInt());
    c.Delete();
    on_comboBox_currentIndexChanged();
    mydb.close();
}

void CommandesDialog::on_Load_Button_clicked()
{
    mydb.open();
    if(!mydb.open())
    {
        ui->label_4->setText("Failed to open the database");
        return;
    }
    else
    {
        ui->label_4->setText("Connected");

    }
    QSqlQueryModel* modal = new QSqlQueryModel();
    Commandes C;
    modal = C.Load();
    ui->tableView->setModel(modal);
    ui->tableView->resizeColumnToContents(3);
    qDebug() << modal->rowCount();
    mydb.close();
}

void CommandesDialog::on_Init_button_clicked()
{
    ui->line_cmd->setText("");
    ui->line_prod->setText("");
    ui->line_qtte->setText("");
    ui->line_date->setText("");
    ui->line_prod_4->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->Save_button->setEnabled(true);
    ui->Delete_button->setEnabled(true);
    ui->Update_button->setEnabled(true);
    ui->comboBox->setCurrentIndex(-1);
}

void CommandesDialog::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();
    mydb.open();

    if(!mydb.open())
    {
        ui->label_4->setText("Failed to open the database");
        return;
    }
    else
    {
        ui->label_4->setText("Connected");

    }

    QSqlQuery qry;
    qry.prepare("select * from Commandes WHERE code_cmd='"+val+"'");

    if (qry.exec())
    {
        while (qry.next())
        {
            ui->line_cmd->setText(qry.value(0).toString());
            ui->line_prod->setText(qry.value(1).toString());
            ui->line_qtte->setText(qry.value(2).toString());
            ui->line_date->setText(qry.value(3).toString());
            ui->comboBox->setCurrentText(qry.value(1).toString());
        }

        mydb.close();
    }
    else
    {
        QMessageBox::critical(this, tr("Error : "), qry.lastError().text());
    }


    ui->Init_button->setEnabled(true);
    on_comboBox_currentIndexChanged();
}


void CommandesDialog::on_comboBox_currentIndexChanged()
{
        QString id=ui->comboBox->currentText();
        mydb.open();
        if(!mydb.open())
        {
            ui->label_4->setText("Failed to open the database");
            return;
        }
        else
        {
            ui->label_4->setText("Connected");

        }
        QSqlQuery qry;
        qry.prepare("select * FROM Produit where code_prod='"+id+"'");

        if (qry.exec())
        {
            while (qry.next())
            {
                ui->line_prod->setText(qry.value(0).toString());
                ui->line_prod_4->setText(qry.value(1).toString());
                ui->lineEdit_3->setText(qry.value(2).toString());
                ui->lineEdit_4->setText(qry.value(3).toString());
                ui->lineEdit_5->setText(qry.value(4).toString());
                ui->lineEdit_6->setText(qry.value(5).toString());
            }
        }
        else
        {
            QMessageBox::critical(this, tr("Error : "), qry.lastError().text());
        }
        mydb.close();
}
