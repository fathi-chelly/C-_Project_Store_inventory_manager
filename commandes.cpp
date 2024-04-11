#include "commandes.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <dbconnexion.h>
#include "qcustomplot.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <produit.h>
#include <QCoreApplication>

Commandes::Commandes()
{
}
Commandes::~Commandes()
{
}
int Commandes::getCodeCmd()
{
    return code_cmd;
}

int Commandes::getCodeProd()
{
    return code_prod;
}

int Commandes::getQtte()
{
    return qtte;
}

QDateTime Commandes::getDate()
{
    return date;
}

void Commandes::setCodeCmd(int codeCmd)
{
    code_cmd = codeCmd;
}

void Commandes::setCodeProd(int codeProd)
{
    code_prod = codeProd;
}

void Commandes::setQtte(int qtt)
{
    qtte = qtt;
}
void Commandes::setDate(QDateTime d)
{
    date = d;
}

void Commandes::Ajouter()
{
    QSqlQuery qry, qry2, qry3;
    qry.prepare("INSERT INTO Commandes (code_prod, qtte_cmd, date_commande) VALUES ('" + QString::number(code_prod) + "', '" + QString::number(qtte) + "', '" + date.toString("yyyy-MM-dd") + "')");

    if (qry.exec())
    {
        qDebug() << "Commande enregistrée";
        qry2.prepare("SELECT Quantite FROM Produit WHERE code_prod='" + QString::number(code_prod) + "'");
        if (qry2.exec())
        {
            if (qry2.next()) // Vérifie si une ligne a été retournée
            {
                qDebug() << "Produit trouvé";
                int nouvel_quantite = qry2.value(0).toInt();
                nouvel_quantite -= qtte;
                qry3.prepare("UPDATE Produit SET Quantite='" + QString::number(nouvel_quantite) + "' WHERE code_prod='" + QString::number(code_prod) + "'");
                if (qry3.exec())
                    {
                        qDebug() << "Produit mis à jour";
                    }
                else
                    {
                        qDebug() << "Erreur lors de la mise à jour du produit :" << qry3.lastError().text();
                    }

            }
            else
            {
                qDebug() << "Erreur : Aucun produit trouvé avec ce code.";
            }
        }
        else
        {
            qDebug() << "Erreur lors de la récupération du produit :" << qry2.lastError().text();
        }
    }
    else
    {
        qDebug() << "Erreur : Commande non ajoutée :" << qry.lastError().text();
    }
}

void Commandes::Update()
{
    int Old=0;
    QSqlQuery qry,qry2,qry3,qry4;
    qry4.prepare("SELECT qtte_cmd from Commandes WHERE code_cmd='" + QString::number(code_cmd) + "'");
    if (qry4.exec())
    {
        if (qry4.next()) // Vérifie si une ligne a été retournée
        {
             Old=qry4.value(0).toInt();
             qDebug()<<Old;
        }
        else
            qDebug()<<"Rien trouve";
    }
    else
    {
        qDebug()<<"Error while looking for old order quantity";
        return;
    }
    qry.prepare("UPDATE Commandes SET code_prod='" + QString::number(code_prod) + "', qtte_cmd='" + QString::number(qtte) + "', date_commande='" + date.toString("yyyy-MM-dd") + "' WHERE code_cmd='" + QString::number(code_cmd) + "'");

    if (qry.exec())
    {
        qDebug() << "Commande enregistrée";
        qry2.prepare("SELECT Quantite FROM Produit WHERE code_prod='" + QString::number(code_prod) + "'");
        if (qry2.exec())
        {
            if (qry2.next()) // Vérifie si une ligne a été retournée
            {
                qDebug() << "Produit trouvé";
                int nouvel_quantite = qry2.value(0).toInt();
                qDebug() << nouvel_quantite;
                nouvel_quantite = nouvel_quantite- qtte + Old;
                qDebug()<<qtte;

                qry3.prepare("UPDATE Produit SET Quantite='" + QString::number(nouvel_quantite) + "' WHERE code_prod='" + QString::number(code_prod) + "'");
                if (qry3.exec())
                {
                    qDebug() << "Produit mis à jour";
                }
                else
                {
                    qDebug() << "Erreur lors de la mise à jour du produit :" << qry3.lastError().text();
                }
            }
            else
            {
                qDebug() << "Erreur : Aucun produit trouvé avec ce code.";
            }
        }
        else
        {
            qDebug() << "Erreur lors de la récupération du produit :" << qry2.lastError().text();
        }
    }
    else
    {
        qDebug() << "Erreur : Commande non mis a jour :" << qry.lastError().text();
    }
}
void Commandes::Delete()
{
    QSqlQuery qry,qry2,qry3,qry4;
    int Existe=0,Old=0;
    qry4.prepare("SELECT qtte_cmd from Commandes WHERE code_cmd='" + QString::number(code_cmd) + "'");
    if (qry4.exec())
    {
        if (qry4.next()) // Vérifie si une ligne a été retournée
        {
             Old=qry4.value(0).toInt();
             qDebug()<<Old;
        }
        else
            qDebug()<<"Rien trouve";
    }
    else
    {
        qDebug()<<"Error while looking for old order quantity";
        return;
    }
    qry.prepare("SELECT * from Commandes WHERE code_cmd='"+QString::number(code_cmd)+"'");
    if (qry.exec())
    {
        Existe=1;
        if (qry.next()) // Vérifie si une ligne a été retournée
        {
        qDebug() << "Commande existe";
        qry2.prepare("SELECT Quantite FROM Produit WHERE code_prod='" + QString::number(code_prod) + "'");
        if (qry2.exec())
        {
            if (qry2.next()) // Vérifie si une ligne a été retournée
            {
                qDebug() << "Produit trouvé";
                int nouvel_quantite = qry2.value(0).toInt();
                qDebug() << nouvel_quantite;
                nouvel_quantite = nouvel_quantite + Old;
                qry3.prepare("UPDATE Produit SET Quantite='" + QString::number(nouvel_quantite) + "' WHERE code_prod='" + QString::number(code_prod) + "'");
                if (qry3.exec())
                {
                    qDebug() << "Produit mis à jour";
                }
                else
                {
                    qDebug() << "Erreur lors de la mise à jour du produit :" << qry3.lastError().text();
                }
            }
            else
            {
                qDebug() << "Erreur : Aucun produit trouvé avec ce code.";
            }
        }
        else
        {
            qDebug() << "Erreur lors de la récupération du produit :" << qry2.lastError().text();
        }
        }
    }
    else
    {
        qDebug() << "Commande inexistante :" ;
    }
    if(Existe==1)
    {
    qry.prepare("DELETE from Commandes WHERE code_cmd='"+QString::number(code_cmd)+"'");
    if (qry.exec())
        qDebug()<<"Commande supprimée";
    }

}
QSqlQueryModel* Commandes::Load()
{
    QSqlDatabase data_base = mydb.get_mydb();
    QSqlQuery qry(data_base);
    qry.prepare("select * from Commandes");
    qry.exec();
    QSqlQueryModel* modal = new QSqlQueryModel();
    modal->setQuery(qry);
    return modal;
}



