#ifndef COMMANDES_H
#define COMMANDES_H
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QSqlDatabase>
#include <dbconnexion.h>
#include <QDateTime>

class Commandes
{
    int code_cmd,code_prod,qtte;
    QDateTime date;
public:
    DBConnexion mydb;
    Commandes();
    ~Commandes();
    int getCodeCmd();
    int getCodeProd();
    int getQtte();
    QDateTime getDate();
    void setCodeCmd(int);
    void setCodeProd(int);
    void setQtte(int );
    void setDate(QDateTime );
    void Ajouter();
    void Update();
    void Delete();
    QSqlQueryModel * Load();


};

#endif // COMMANDES_H
