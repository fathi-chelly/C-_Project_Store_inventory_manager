#include "dbconnexion.h"
#include <qsqldatabase.h>
#include <QtDebug>
DBConnexion::DBConnexion()
{

}
DBConnexion::~DBConnexion()
{

}

bool DBConnexion::open()
{
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("./Stock.DB");
    if(!mydb.open())
        return false;
    else
        return true;
}
void DBConnexion::close()
{
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}
QSqlDatabase DBConnexion::get_mydb()
{
    return mydb;
}

