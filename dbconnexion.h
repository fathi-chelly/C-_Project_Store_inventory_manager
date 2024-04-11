#ifndef DBCONNEXION_H
#define DBCONNEXION_H
#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

class DBConnexion
{
    QSqlDatabase mydb;
public:
    DBConnexion();
    ~DBConnexion();
    bool open();
    void close();
    QSqlDatabase get_mydb();
};

#endif // DBCONNEXION_H
