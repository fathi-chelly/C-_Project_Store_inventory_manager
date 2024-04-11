#include "stats.h"
#include "ui_stats.h"
#include "produit.h"
#include <qcustomplot.h>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTreeWidget>
#include <QModelIndex>
#include "stats.h"
#include "commandes.h"

Stats::Stats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Stats)
{
    ui->setupUi(this);
    plot(ui->customPlot,ProduitsLesPlusDemandes());

}
QMap<QString, int> Stats::ProduitsLesPlusDemandes()
{
    mydb.open();

    QSqlQuery qry(mydb.get_mydb());
    qry.prepare("SELECT code_prod, SUM(qtte_cmd) as total_qtte FROM Commandes GROUP BY code_prod ORDER BY total_qtte DESC");

    QMap<QString, int> produitsDemandes; // Utilisez QMap pour stocker les données du graphique

    if(qry.exec())
    {
        while(qry.next())
        {
            int codeProduit = qry.value(0).toInt();
            int totalQuantite = qry.value(1).toInt();

            Produit p;
            p.set_code_prod(codeProduit);
            QSqlQuery qry2;
            QString nomProduit;
            qry2.prepare("select * FROM Produit where code_prod='" + QString::number(codeProduit) + "'");

            if (qry2.exec())
            {
                while (qry2.next())
                {
                    nomProduit = qry2.value(1).toString();
                }
            }
            else
            {
                QMessageBox::critical(this, tr("Error while looking for the product name: "), qry.lastError().text());
            }


            // Remplissez le QMap avec les données du graphique
            produitsDemandes.insert(nomProduit, totalQuantite);

        }

        mydb.close();
    }
    else
    {
        qDebug() << "Error in function ProduitsLesPlusDemandes(): " << qry.lastError().text();
        mydb.close();
    }
    return produitsDemandes;
}


void Stats::plot(QCustomPlot *customPlot, const QMap<QString, int> Pluscommandes) {
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    customPlot->setBackground(QBrush(gradient));

    // create empty bar chart objects:
    QCPBars *number = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    number->setAntialiased(false);
    number->setStackingGap(1);
    // set names and colors:
    number->setName("Purchased quantity");
    number->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    number->setBrush(QColor(111, 9, 176));

    // prepare x axis with products labels:

    QVector<double> ticks;
    QVector<QString> labels;
    QMap<QString, int>::const_iterator it;
    for (it = Pluscommandes.constBegin(); it != Pluscommandes.constEnd(); ++it) {
        QString key = it.key();
        ticks << (ticks.size() + 1); // Ajoute un tick pour chaque label
        labels << key; // Utilisez la clé comme étiquette
    }

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    customPlot->xAxis->setTicker(textTicker);
    customPlot->xAxis->setTickLabelRotation(60);
    customPlot->xAxis->setSubTicks(false);
    customPlot->xAxis->setTickLength(0, 4);
    customPlot->xAxis->setRange(0, ticks.size() + 1); // Assurez-vous que la plage couvre tous les ticks
    customPlot->xAxis->setBasePen(QPen(Qt::white));
    customPlot->xAxis->setTickPen(QPen(Qt::white));
    customPlot->xAxis->grid()->setVisible(true);
    customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    customPlot->xAxis->setTickLabelColor(Qt::white);
    customPlot->xAxis->setLabelColor(Qt::white);


    // prepare y axis:
    int max=0;
    for (it = Pluscommandes.constBegin(); it != Pluscommandes.constEnd(); ++it) {
        if(max < it.value())
            max=it.value();
    }
    customPlot->yAxis->setRange(0, max+1);
    customPlot->yAxis->setPadding(5); // a bit more space to the left border
    customPlot->yAxis->setLabel("Purchased quantity");
    customPlot->yAxis->setBasePen(QPen(Qt::white));
    customPlot->yAxis->setTickPen(QPen(Qt::white));
    customPlot->yAxis->setSubTickPen(QPen(Qt::white));
    customPlot->yAxis->grid()->setSubGridVisible(true);
    customPlot->yAxis->setTickLabelColor(Qt::white);
    customPlot->yAxis->setLabelColor(Qt::white);
    customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    // Add data:
    QVector<double> PurchaseData;
    for (it = Pluscommandes.constBegin(); it != Pluscommandes.constEnd(); ++it) {
        PurchaseData  << it.value();
    }
    number->setData(ticks, PurchaseData);

    // setup legend:
    customPlot->legend->setVisible(true);
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignRight);
    customPlot->legend->setBrush(QColor(255, 255, 255, 100));
    customPlot->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    customPlot->legend->setFont(legendFont);
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}
Stats::~Stats()
{
    delete ui;
}

