#ifndef STATS_H
#define STATS_H
#include <qcustomplot.h>
#include <QWidget>
#include <dbconnexion.h>

namespace Ui {
class Stats;
}

class Stats : public QWidget
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = 0);
    DBConnexion mydb;

    ~Stats();
private slots:

    void plot(QCustomPlot *,QMap<QString, int>);

    QMap <QString, int>ProduitsLesPlusDemandes();

private:
    Ui::Stats *ui;
};

#endif // STATS_H
