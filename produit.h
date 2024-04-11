#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include<QSqlDatabase>
#include<QFile>
#include<QTextStream>
#include <QDateTime>
#include"ui_productdialog.h"
#include"dbconnexion.h"
#include"productdialog.h"
#include"produit.h"


class Produit
{
public:
    Produit();
    ~Produit();
    int get_code_prod();
    QString get_nom_prod();
    QString get_Description();
    int get_Quantite();
    float get_prix_unit();
    QDateTime get_date_exp();

    void  set_code_prod(int i);
    void set_nom_prod(QString n);
    void set_Description(QString d);
    void  set_Quantite(int q);
    void set_prix_unit(float f);
    void set_date_exp(QDateTime e);
    QSqlQueryModel* Search(QString ,double,double);
    void Ajouter();
    void Supprimer();
    void Modifier();
    QSqlQueryModel * Load();


private:
    int code_prod,Quantite;
    float prix_unit;
    QString nom_prod,Description;
    QDateTime date_exp;
    DBConnexion mydb;

};

#endif // PRODUIT_H
