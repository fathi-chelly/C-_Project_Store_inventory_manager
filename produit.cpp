#include "produit.h"
#include"dbconnexion.h"
#include"productdialog.h"
#include<QString>
#include<QTextStream>
#include<QDebug>
#include<QSqlDatabase>
#include<QMessageBox>

Produit::Produit()
{
    code_prod=0;
    nom_prod="";
    Description="";
    Quantite=0;
    prix_unit=0;
    date_exp=QDateTime::currentDateTime();
}

Produit::~Produit()
{

}

int Produit::get_code_prod()
{
    return code_prod;
}

QString Produit::get_nom_prod()
{
    return nom_prod;
}
QString Produit::get_Description()
{
    return Description;
}
int Produit::get_Quantite()
{
    return Quantite;
}
float Produit::get_prix_unit()
{
    return prix_unit;
}

QDateTime Produit::get_date_exp()
{
    return date_exp;
}

void Produit::set_code_prod(int i)
{
     code_prod=i;
}

void Produit::set_nom_prod(QString n)
{
     nom_prod=n;
}
void Produit::set_Description(QString d)
{
    Description=d;
}
void Produit::set_Quantite(int q)
{
     Quantite=q;
}
void Produit::set_prix_unit(float f)
{
    prix_unit=f;
}

void Produit::set_date_exp(QDateTime e)
{
   date_exp=e;
}

void Produit::Ajouter()
{
    DBConnexion conn;
    if(!conn.open())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery qry;
    qry.prepare("insert into Produit(nom_prod,Description,Quantite,prix_unit,date_expiration) values ('"+nom_prod+"','"+Description+"','"+QString::number(Quantite)+"','"+QString::number(prix_unit)+"','"+ date_exp.toString("yyyy-MM-dd") +"')");
    if(qry.exec())
       {
          qDebug()<<"Saved";
          conn.close();
       }
       else
       {
           qDebug()<<qry.lastError().text();
       }


}

void Produit::Modifier()
{
    DBConnexion conn;
    if(!conn.open())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.open();
    QSqlQuery qry;
    qry.prepare("update Produit set nom_prod='"+nom_prod+"',Description='"+Description+"',Quantite='"+QString::number(Quantite)+"',prix_unit='"+QString::number(prix_unit)+"',date_expiration='"+ date_exp.toString("yyyy-MM-dd") +"' where code_prod='"+QString::number(code_prod)+"'");

    if(qry.exec())
       {
          qDebug()<<"Updated";
          conn.close();
       }
       else
       {
           qDebug()<<qry.lastError().text();
       }



}

void Produit::Supprimer()
{
    DBConnexion conn;
    if(!conn.open())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery qry;
   qry.prepare("delete from Produit where code_prod='"+QString::number(code_prod)+"'");
    if(qry.exec())
       {
          qDebug()<<"Deleted";
          conn.close();
       }
       else
       {
           qDebug()<<qry.lastError().text();
       }


}

QSqlQueryModel * Produit::Load()
{

    DBConnexion mydb;
    QSqlQueryModel * modal=new QSqlQueryModel();
        mydb.open();
        QSqlQuery* qry=new QSqlQuery(mydb.get_mydb());
        qry->prepare("select * from Produit");
        qry->exec();
        modal->setQuery(*qry);
        /*ui->tableView->setModel(modal);*/
        mydb.close();
        qDebug() <<(modal->rowCount());
        return modal;
}

QSqlQueryModel* Produit::Search(QString val,double val2,double val3)
{
    DBConnexion mydb;
    QSqlQueryModel* modal = new QSqlQueryModel();
    mydb.open();
    QSqlQuery* qry = new QSqlQuery(mydb.get_mydb());
    if(val=="")
        qry->prepare("SELECT * FROM Produit WHERE Quantite >= '"+QString::number(val2)+"'and prix_unit <= '"+QString::number(val3)+"'");
    else
        qry->prepare("SELECT * FROM Produit WHERE nom_prod = '" + val + "' and Quantite >= '"+QString::number(val2)+"'and prix_unit <= '"+QString::number(val3)+"'");

    if(qry->exec())
    {
        modal->setQuery(*qry);
    }
    else
    {
        qDebug() << "Error: " << qry->lastError().text();
    }

    mydb.close();
    qDebug() << modal->rowCount();
    return modal;
}

