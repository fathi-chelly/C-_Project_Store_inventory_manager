#ifndef USERDIALOG_H
#define USERDIALOG_H
#include <dbconnexion.h>
#include <QDialog>
#include <produit.h>
#include <qcustomplot.h>
#include <cfloat>

namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(QWidget *parent = 0);
    ~UserDialog();
    DBConnexion mydb;
    double maximumPrix=DBL_MAX;
    double minimumQuantity=0.0;
    int open=0;

private slots:

    void on_SearchButton_clicked();

    void on_InitButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_treeView_clicked(const QModelIndex &index);

    void on_treeView_activated(const QModelIndex &index);

    void on_treeView_expanded(const QModelIndex &index);

    void on_commandButton_clicked();

    void on_Commander_button_clicked();

    void on_pushButton_clicked();

    void on_button_stat_clicked();

    void on_tabWidget_tabCloseRequested(int index);

private:
    Ui::UserDialog *ui;
};

#endif // USERDIALOG_H
