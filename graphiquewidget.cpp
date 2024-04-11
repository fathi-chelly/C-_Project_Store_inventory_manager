/*#include <QSqlRecord>
#include "graphiquewidget.h"
#include "commandes.h"
GraphiqueWidget::GraphiqueWidget(QWidget *parent) : QWidget(parent)
  {
      QString demoName = "Produits les plus commandés";

      // Récupérer les données du modèle QSqlQueryModel (remplacez 'commandesModel' par votre propre modèle)
      QSqlQueryModel* commandesModel = new QSqlQueryModel();
      Commandes C;
      commandesModel = C.Load();
      // Vérifier si le modèle est valide
      if (!commandesModel)
      {
          qDebug() << "Failed to load commandes data";
          return;
      }

      // Créer le graphique à barres
      QCPBars *barresCommandes = new QCPBars(customPlot->xAxis, customPlot->yAxis);

      // Ajouter le graphique à barres
      customPlot->addGraph();
      customPlot->graph()->setAdaptiveSampling(true);
      // Configuration des données pour le graphique à barres
      QVector<double> indexData, frequencyData;

      for (int i = 0; i < commandesModel->rowCount(); ++i) {
          indexData << i;
          frequencyData << commandesModel->record(i).value("total_qtte").toDouble();
      }

      barresCommandes->setData(indexData, frequencyData);

      // Ajouter les nouvelles étiquettes (remplacez 'nom_prod' par le nom de la colonne contenant les noms des produits)
      for (int i = 0; i < commandesModel->rowCount(); ++i) {
          customPlot->xAxis->addTick(i, commandesModel->record(i).value("nom_prod").toString());
      }

      customPlot->xAxis->setTickLabelRotation(45);

      // Configuration de l'axe Y
      customPlot->yAxis->setLabel("Fréquence de commandes");

      // Configuration de l'apparence du graphique
      customPlot->rescaleAxes();
      customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

      // Affichage du graphique
      customPlot->replot();
  }
*/
