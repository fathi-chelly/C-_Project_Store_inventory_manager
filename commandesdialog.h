#ifndef COMMANDESDIALOG_H
#define COMMANDESDIALOG_H
#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "ui_commandesdialog.h"
#include <dbconnexion.h>

namespace Ui {
class CommandesDialog;
}

class CommandesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CommandesDialog(QWidget *parent = 0);
    DBConnexion mydb;
    ~CommandesDialog();

private slots:
    void on_Save_button_clicked();

    void on_Update_button_clicked();

    void on_Delete_button_clicked();

    void on_Load_Button_clicked();

    void on_Init_button_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_comboBox_currentIndexChanged();

private:
    Ui::CommandesDialog *ui;
};

#endif // COMMANDESDIALOG_H
