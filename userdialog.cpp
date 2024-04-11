#include "userdialog.h"
#include "ui_userdialog.h"
#include "produit.h"
#include <qcustomplot.h>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTreeWidget>
#include <QModelIndex>
#include "stats.h"
#include "commandes.h"

UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);
    QString styleSheet = QString("QTableView { background-image: url('%1'); background-repeat: no-repeat; background-position: center; }").arg("./a7a.png");
    ui->tableView->setStyleSheet("QTableView { font-size: 9pt; }");
    ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section { color: white; background-color: #F9DDDD; border: 1px solid #6c6c6c; font-size: 9pt; font-weight: bold; }");

    Produit p;
    QSqlQueryModel *modal = p.Load();

    if(modal)
    {
       ui->tableView->setModel(modal);
       qDebug() << modal->rowCount();
    }
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Interactive);
    ui->tableView->setColumnWidth(5, 120);
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Interactive);
    ui->tableView->setColumnWidth(2, 120);
    //tree view:
    QStandardItemModel* model = new QStandardItemModel();
    QStandardItem *Avancee = new QStandardItem;
    QStandardItem *prix = new QStandardItem;
    QStandardItem *quantity = new QStandardItem;
    Avancee->setText("Advanced search");
    prix->setText("Maximum price");
    quantity->setText("Available quantity");
    Avancee->appendRow(prix);
    Avancee->appendRow(quantity);
    model->appendRow(Avancee);
    ui->treeView->setModel(model);
    ui->treeView->resizeColumnToContents(0);
    //table view 2 setup
    QStringList headers;
    headers << "Product Code" << "Product Name" << "Quantity" << "Price";
    QStandardItemModel *model3 = new QStandardItemModel();
    model3->setHorizontalHeaderLabels(headers);
    ui->tableView_2->setModel(model3);


}

UserDialog::~UserDialog()
{
    delete ui;
}



void UserDialog::on_SearchButton_clicked()
{
    QString val = ui->Search_bar->text();
    qDebug()<<val;
    Produit p;
    QSqlQueryModel *modal = p.Search(val,minimumQuantity,maximumPrix);

    if(modal && modal->rowCount() > 0)
    {
       ui->tableView->setModel(modal);
    }
    else if(modal)
    {
        QMessageBox::information(this, "No Result", "No results found for the search.");
    }
    else
    {
        qDebug() << "Failed to load products";
    }

}

void UserDialog::on_InitButton_clicked()
{
    ui->Search_bar->setText("");
    Produit p;
    QSqlQueryModel *modal = p.Load();
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->treeView->model());
    QModelIndex index = model->index(0,0);
    QStandardItem *item = model->itemFromIndex(index);

    int rowCount = item->rowCount();
    for (int i = 0; i < rowCount; ++i)
    {
        QStandardItem *childItem = item->child(i);
        if (childItem && childItem->text().startsWith("Maximum price"))
        {
            QStandardItem *grandchild = childItem->child(0);
            if (grandchild && grandchild->text().startsWith("Maximum price:"))
            {
                childItem->removeRow(0);
            }

        }
        if (childItem && childItem->text().startsWith("Available quantity"))
        {
            QStandardItem *grandchild = childItem->child(0);
            if (grandchild && grandchild->text().startsWith("Available quantity:"))
            {
                childItem->removeRow(0);
            }

        }
    }



    if(modal)
    {
       ui->tableView->setModel(modal);
    }
}

void UserDialog::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();
    mydb.open();
    QSqlQuery qry;
    qry.prepare("select * from Produit WHERE code_prod='"+val+"'");

    if (qry.exec())
    {
        while (qry.next())
        {
            ui->line_prod->setText(qry.value(0).toString());
            ui->line_nom->setText(qry.value(1).toString());
            ui->line_desc->setText(qry.value(2).toString());
            ui->line_quan->setText(qry.value(3).toString());
            ui->line_prix->setText(qry.value(4).toString());
            ui->line_date->setText(qry.value(5).toString());
        }

        mydb.close();
    }
    else
    {
        QMessageBox::critical(this, tr("Error : "), qry.lastError().text());
    }
}

void UserDialog::on_treeView_clicked(const QModelIndex &index)
{
    ui->treeView->resizeColumnToContents(0);
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->treeView->model());
    QStandardItem *item = model->itemFromIndex(index);

    if (item && item->text() == "Maximum price") {
        bool ok;
        maximumPrix = QInputDialog::getDouble(this, tr("Maximum price"), tr("Enter the maximum price:"), 0, 0, 1000000, 2, &ok);
        if (ok) {
            // Vérifier si l'élément maximumPrixItem existe déjà
            bool maximumPrixItemExists = false;
            int rowCount = item->rowCount();
            for (int i = 0; i < rowCount; ++i) {
                QStandardItem *childItem = item->child(i);
                if (childItem && childItem->text().startsWith("Maximum price:")) {
                    // Mettre à jour le texte de l'élément existant
                    childItem->setText(QString("Maximum price: %1").arg(maximumPrix));
                    maximumPrixItemExists = true;
                    ui->treeView->resizeColumnToContents(0);
                    break;
                }
            }

            // Si maximumPrixItem n'existe pas, le créer et l'ajouter comme enfant de l'élément "Prix"
            if (!maximumPrixItemExists) {
                QStandardItem *maximumPrixItem = new QStandardItem(QString("Maximum price: %1").arg(maximumPrix));
                item->appendRow(maximumPrixItem);
                ui->treeView->resizeColumnToContents(0);


            }
        }
    }
    else     if (item && item->text() == "Available quantity") {
        bool ok;
        minimumQuantity = QInputDialog::getDouble(this, tr("Available quantity"), tr("Enter minimum available quantity:"), 0, 0, 1000000, 2, &ok);
        if (ok) {
            bool minimumquantityItemExists = false;
            int rowCount = item->rowCount();
            for (int i = 0; i < rowCount; ++i) {
                QStandardItem *childItem = item->child(i);
                if (childItem && childItem->text().startsWith("Available quantity:")) {
                    // Mettre à jour le texte de l'élément existant
                    childItem->setText(QString("Available quantity: %1").arg(minimumQuantity));
                    minimumquantityItemExists = true;
                    ui->treeView->resizeColumnToContents(0);
                    break;
                }
            }

            if (!minimumquantityItemExists) {
                QStandardItem *minimumquantityItem = new QStandardItem(QString("Available quantity: %1").arg(minimumQuantity));
                item->appendRow(minimumquantityItem);
                ui->treeView->resizeColumnToContents(0);


            }
        }
    }
}





void UserDialog::on_treeView_activated(const QModelIndex &index)
{
    ui->treeView->resizeColumnToContents(0);
}

void UserDialog::on_treeView_expanded(const QModelIndex &index)
{
    ui->treeView->resizeColumnToContents(0);
}

void UserDialog::on_commandButton_clicked()
{
    QString disponible = ui->line_quan->text();
    QString a_commander = ui->line_qtte->text();

    if (disponible.toInt() < a_commander.toInt())
        QMessageBox::critical(this, "Overdemand", "The available stock quantity is insufficient");
    else
    {
        int s=(ui->label_sum->text()).toInt();
        QString Code = ui->line_prod->text();
        QString nom = ui->line_nom->text();
        QString quantite = ui->line_qtte->text();
        QString prix = ui->line_prix->text();
        s+=(quantite.toInt())*(prix.toInt());
        ui->label_sum->setText(QString::number(s));

        QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView_2->model());
        QStandardItem *codeProdItem = new QStandardItem(Code);
        QStandardItem *nomProdItem = new QStandardItem(nom);
        QStandardItem *quantiteItem = new QStandardItem(quantite);
        QStandardItem *prixItem = new QStandardItem(prix);
        QList<QStandardItem*> rowItems; // Créer une liste de QStandardItem
        rowItems << codeProdItem << nomProdItem << quantiteItem << prixItem; // Ajouter les QStandardItem à la liste
        model->appendRow(rowItems); // Ajouter la liste de QStandardItem comme une ligne au modèle
        ui->tableView_2->setModel(model);
    }



}


void UserDialog::on_Commander_button_clicked()
{
    qDebug()<< ui->tableView_2->model()->rowCount();
    for (int row = 0; row < ui->tableView_2->model()->rowCount(); ++row)
    {
        QString code = ui->tableView_2->model()->index(row, 0).data().toString();
        QString nom = ui->tableView_2->model()->index(row, 1).data().toString();
        QString quantite = ui->tableView_2->model()->index(row, 2).data().toString();
        QString prix = ui->tableView_2->model()->index(row, 3).data().toString();

        Commandes commande;
        commande.setCodeProd(code.toInt());
        commande.setQtte(quantite.toInt());
        commande.setDate(QDateTime::currentDateTime());
        mydb.open();
        commande.Ajouter();
        mydb.close();
    }
    QMessageBox::information(this, "Success", "The products have been ordered.");
    on_pushButton_clicked();
}


void UserDialog::on_pushButton_clicked()
{
     QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView_2->model());
     if (model)
     {   int s=0;
         model->clear();
         ui->tableView_2->setModel(model);
         ui->label_sum->setText(QString::number(s));
         Produit p;
         QSqlQueryModel *modal = p.Load();

         if(modal)
         {
            ui->tableView->setModel(modal);
            qDebug() << modal->rowCount();
         }
     }
}

void UserDialog::on_button_stat_clicked()
{
    if(open==0)
    {
    ui->tabWidget->addTab(new Stats(),QString("Stats"));
    open=1;
    }
}

void UserDialog::on_tabWidget_tabCloseRequested(int index)
{
    if(open==1)
    {
    ui->tabWidget->removeTab(index);
    open=0;
    }
}
