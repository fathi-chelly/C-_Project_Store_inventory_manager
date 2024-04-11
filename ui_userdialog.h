/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *Produit;
    QTableView *tableView;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_3;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *line_prod;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *line_nom;
    QFrame *frame_21;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *line_desc;
    QFrame *frame_22;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *line_quan;
    QFrame *frame_23;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *line_prix;
    QFrame *frame_24;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *line_date;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_21;
    QLineEdit *line_qtte;
    QFrame *frame_26;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *commandButton;
    QFrame *frame_27;
    QHBoxLayout *horizontalLayout_23;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_28;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_14;
    QLabel *label_15;
    QFrame *frame_29;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *button_stat;
    QFrame *frame_30;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_26;
    QFrame *frame_31;
    QHBoxLayout *horizontalLayout_29;
    QLineEdit *Search_bar;
    QFrame *frame_32;
    QHBoxLayout *horizontalLayout_31;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *SearchButton;
    QPushButton *InitButton;
    QFrame *frame_33;
    QHBoxLayout *horizontalLayout_27;
    QTreeView *treeView;
    QWidget *Panier;
    QTableView *tableView_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QLabel *label_sum;
    QLabel *label_6;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QPushButton *Commander_button;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName(QStringLiteral("UserDialog"));
        UserDialog->resize(1148, 681);
        UserDialog->setStyleSheet(QStringLiteral("background-color: #c1d4d7"));
        tabWidget = new QTabWidget(UserDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1151, 691));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setTabsClosable(true);
        Produit = new QWidget();
        Produit->setObjectName(QStringLiteral("Produit"));
        tableView = new QTableView(Produit);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 200, 661, 401));
        frame_9 = new QFrame(Produit);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(710, 170, 407, 475));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_10);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        frame_18 = new QFrame(frame_10);
        frame_18->setObjectName(QStringLiteral("frame_18"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_18);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frame_18);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_6->addWidget(frame_18);

        frame_17 = new QFrame(frame_10);
        frame_17->setObjectName(QStringLiteral("frame_17"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_17);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(frame_17);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_6->addWidget(frame_17);

        frame_16 = new QFrame(frame_10);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_16);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(frame_16);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_6->addWidget(frame_16);

        frame_14 = new QFrame(frame_10);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_14);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(frame_14);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);


        verticalLayout_6->addWidget(frame_14);

        frame_12 = new QFrame(frame_10);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_10 = new QLabel(frame_12);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);


        verticalLayout_6->addWidget(frame_12);

        frame_13 = new QFrame(frame_10);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_13);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(frame_13);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);


        verticalLayout_6->addWidget(frame_13);

        frame_15 = new QFrame(frame_10);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_15);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_3 = new QLabel(frame_15);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_14->addWidget(label_3);


        verticalLayout_6->addWidget(frame_15);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout->addWidget(frame_10);

        frame_11 = new QFrame(frame_9);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        frame_19 = new QFrame(frame_11);
        frame_19->setObjectName(QStringLiteral("frame_19"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_19);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        line_prod = new QLineEdit(frame_19);
        line_prod->setObjectName(QStringLiteral("line_prod"));
        line_prod->setEnabled(false);
        line_prod->setMinimumSize(QSize(0, 25));

        horizontalLayout_15->addWidget(line_prod);


        verticalLayout_8->addWidget(frame_19);

        frame_20 = new QFrame(frame_11);
        frame_20->setObjectName(QStringLiteral("frame_20"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_20);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        line_nom = new QLineEdit(frame_20);
        line_nom->setObjectName(QStringLiteral("line_nom"));
        line_nom->setEnabled(false);
        line_nom->setMinimumSize(QSize(0, 25));

        horizontalLayout_16->addWidget(line_nom);


        verticalLayout_8->addWidget(frame_20);

        frame_21 = new QFrame(frame_11);
        frame_21->setObjectName(QStringLiteral("frame_21"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_21);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        line_desc = new QLineEdit(frame_21);
        line_desc->setObjectName(QStringLiteral("line_desc"));
        line_desc->setEnabled(false);
        line_desc->setMinimumSize(QSize(0, 25));

        horizontalLayout_17->addWidget(line_desc);


        verticalLayout_8->addWidget(frame_21);

        frame_22 = new QFrame(frame_11);
        frame_22->setObjectName(QStringLiteral("frame_22"));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_22);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        line_quan = new QLineEdit(frame_22);
        line_quan->setObjectName(QStringLiteral("line_quan"));
        line_quan->setEnabled(false);
        line_quan->setMinimumSize(QSize(0, 25));

        horizontalLayout_18->addWidget(line_quan);


        verticalLayout_8->addWidget(frame_22);

        frame_23 = new QFrame(frame_11);
        frame_23->setObjectName(QStringLiteral("frame_23"));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        horizontalLayout_19 = new QHBoxLayout(frame_23);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        line_prix = new QLineEdit(frame_23);
        line_prix->setObjectName(QStringLiteral("line_prix"));
        line_prix->setEnabled(false);
        line_prix->setMinimumSize(QSize(0, 25));

        horizontalLayout_19->addWidget(line_prix);


        verticalLayout_8->addWidget(frame_23);

        frame_24 = new QFrame(frame_11);
        frame_24->setObjectName(QStringLiteral("frame_24"));
        frame_24->setMinimumSize(QSize(0, 25));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_24);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        line_date = new QLineEdit(frame_24);
        line_date->setObjectName(QStringLiteral("line_date"));
        line_date->setEnabled(false);
        line_date->setMinimumSize(QSize(0, 25));

        horizontalLayout_20->addWidget(line_date);


        verticalLayout_8->addWidget(frame_24);

        frame_25 = new QFrame(frame_11);
        frame_25->setObjectName(QStringLiteral("frame_25"));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(frame_25);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        line_qtte = new QLineEdit(frame_25);
        line_qtte->setObjectName(QStringLiteral("line_qtte"));
        line_qtte->setMinimumSize(QSize(0, 25));

        horizontalLayout_21->addWidget(line_qtte);


        verticalLayout_8->addWidget(frame_25);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout->addWidget(frame_11);


        verticalLayout->addLayout(horizontalLayout);

        frame_26 = new QFrame(frame_9);
        frame_26->setObjectName(QStringLiteral("frame_26"));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        horizontalLayout_22 = new QHBoxLayout(frame_26);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(4, 4, 4, 4);
        commandButton = new QPushButton(frame_26);
        commandButton->setObjectName(QStringLiteral("commandButton"));
        commandButton->setMinimumSize(QSize(0, 30));
        commandButton->setMaximumSize(QSize(130, 16777215));
        commandButton->setStyleSheet(QStringLiteral("background-color: #ffffff"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/Icons/Icons/shopping-cart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        commandButton->setIcon(icon);

        horizontalLayout_22->addWidget(commandButton);


        verticalLayout->addWidget(frame_26);

        frame_27 = new QFrame(Produit);
        frame_27->setObjectName(QStringLiteral("frame_27"));
        frame_27->setGeometry(QRect(729, 20, 371, 150));
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        horizontalLayout_23 = new QHBoxLayout(frame_27);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        frame_28 = new QFrame(frame_27);
        frame_28->setObjectName(QStringLiteral("frame_28"));
        frame_28->setMinimumSize(QSize(0, 60));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        horizontalLayout_25 = new QHBoxLayout(frame_28);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(4, -1, 4, -1);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_14 = new QLabel(frame_28);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setEnabled(false);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_14);

        label_15 = new QLabel(frame_28);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setEnabled(false);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_15);


        horizontalLayout_25->addLayout(verticalLayout_11);


        verticalLayout_10->addWidget(frame_28);

        frame_29 = new QFrame(frame_27);
        frame_29->setObjectName(QStringLiteral("frame_29"));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        horizontalLayout_24 = new QHBoxLayout(frame_29);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        button_stat = new QPushButton(frame_29);
        button_stat->setObjectName(QStringLiteral("button_stat"));
        button_stat->setMaximumSize(QSize(115, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/Icons/Icons/bar-chart-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        button_stat->setIcon(icon1);
        button_stat->setAutoDefault(false);
        button_stat->setDefault(false);

        horizontalLayout_24->addWidget(button_stat);


        verticalLayout_10->addWidget(frame_29);


        horizontalLayout_23->addLayout(verticalLayout_10);

        frame_30 = new QFrame(Produit);
        frame_30->setObjectName(QStringLiteral("frame_30"));
        frame_30->setGeometry(QRect(30, -10, 661, 201));
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);
        horizontalLayout_28 = new QHBoxLayout(frame_30);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(7);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        frame_31 = new QFrame(frame_30);
        frame_31->setObjectName(QStringLiteral("frame_31"));
        frame_31->setMinimumSize(QSize(0, 20));
        frame_31->setMaximumSize(QSize(500, 40));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        horizontalLayout_29 = new QHBoxLayout(frame_31);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(3, 0, 3, 0);
        Search_bar = new QLineEdit(frame_31);
        Search_bar->setObjectName(QStringLiteral("Search_bar"));
        Search_bar->setMinimumSize(QSize(30, 35));
        Search_bar->setStyleSheet(QStringLiteral("background-color: #ffffff"));

        horizontalLayout_29->addWidget(Search_bar);


        horizontalLayout_26->addWidget(frame_31);

        frame_32 = new QFrame(frame_30);
        frame_32->setObjectName(QStringLiteral("frame_32"));
        frame_32->setMinimumSize(QSize(0, 40));
        frame_32->setMaximumSize(QSize(150, 40));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        horizontalLayout_31 = new QHBoxLayout(frame_32);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 2, 0, 2);
        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(7);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        SearchButton = new QPushButton(frame_32);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setMinimumSize(QSize(20, 25));
        SearchButton->setMaximumSize(QSize(70, 40));
        SearchButton->setStyleSheet(QStringLiteral("background-color: #ffffff"));

        horizontalLayout_30->addWidget(SearchButton);

        InitButton = new QPushButton(frame_32);
        InitButton->setObjectName(QStringLiteral("InitButton"));
        InitButton->setMinimumSize(QSize(0, 25));
        InitButton->setMaximumSize(QSize(70, 40));
        InitButton->setStyleSheet(QStringLiteral("background-color: #ffffff"));

        horizontalLayout_30->addWidget(InitButton);


        horizontalLayout_31->addLayout(horizontalLayout_30);


        horizontalLayout_26->addWidget(frame_32);


        verticalLayout_12->addLayout(horizontalLayout_26);

        frame_33 = new QFrame(frame_30);
        frame_33->setObjectName(QStringLiteral("frame_33"));
        frame_33->setMinimumSize(QSize(0, 100));
        frame_33->setFrameShape(QFrame::StyledPanel);
        frame_33->setFrameShadow(QFrame::Raised);
        horizontalLayout_27 = new QHBoxLayout(frame_33);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        treeView = new QTreeView(frame_33);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setMinimumSize(QSize(0, 90));
        QFont font;
        font.setPointSize(9);
        treeView->setFont(font);
        treeView->setFrameShape(QFrame::NoFrame);
        treeView->setFrameShadow(QFrame::Plain);
        treeView->setLineWidth(0);
        treeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeView->setAutoScrollMargin(20);
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAutoExpandDelay(-1);
        treeView->setIndentation(25);
        treeView->setRootIsDecorated(true);
        treeView->setUniformRowHeights(true);
        treeView->setSortingEnabled(false);
        treeView->setAnimated(true);
        treeView->setAllColumnsShowFocus(false);
        treeView->setWordWrap(false);
        treeView->header()->setVisible(false);
        treeView->header()->setMinimumSectionSize(61);
        treeView->header()->setStretchLastSection(false);

        horizontalLayout_27->addWidget(treeView);


        verticalLayout_12->addWidget(frame_33);


        horizontalLayout_28->addLayout(verticalLayout_12);

        tabWidget->addTab(Produit, QString());
        Panier = new QWidget();
        Panier->setObjectName(QStringLiteral("Panier"));
        tableView_2 = new QTableView(Panier);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(30, 30, 551, 401));
        frame = new QFrame(Panier);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(640, 10, 471, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_4->addWidget(label);


        verticalLayout_3->addWidget(frame_4);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        label_5->setFont(font2);

        horizontalLayout_8->addWidget(label_5);

        label_sum = new QLabel(frame_6);
        label_sum->setObjectName(QStringLiteral("label_sum"));
        label_sum->setEnabled(false);
        label_sum->setMaximumSize(QSize(150, 16777215));
        QFont font3;
        font3.setPointSize(13);
        label_sum->setFont(font3);
        label_sum->setLayoutDirection(Qt::LeftToRight);
        label_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_sum);

        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);
        label_6->setMaximumSize(QSize(40, 16777215));
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_3->addWidget(frame_6);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_5);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(false);
        QFont font4;
        font4.setItalic(true);
        label_7->setFont(font4);

        horizontalLayout_10->addWidget(label_7);


        verticalLayout_3->addWidget(frame_5);


        verticalLayout_2->addWidget(frame_2);

        Commander_button = new QPushButton(frame);
        Commander_button->setObjectName(QStringLiteral("Commander_button"));
        Commander_button->setMinimumSize(QSize(0, 50));
        Commander_button->setSizeIncrement(QSize(0, 0));

        verticalLayout_2->addWidget(Commander_button);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_7);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_8);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pushButton = new QPushButton(frame_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_13->addWidget(pushButton);


        horizontalLayout_12->addWidget(frame_8);


        verticalLayout_2->addWidget(frame_7);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_3);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(false);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(false);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_13);


        horizontalLayout_11->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(frame_3, 0, Qt::AlignBottom);

        tabWidget->addTab(Panier, QString());

        retranslateUi(UserDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QApplication::translate("UserDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("UserDialog", "Product code", 0));
        label_4->setText(QApplication::translate("UserDialog", "Product name", 0));
        label_8->setText(QApplication::translate("UserDialog", "Description", 0));
        label_9->setText(QApplication::translate("UserDialog", "Quantity", 0));
        label_10->setText(QApplication::translate("UserDialog", "Unit price", 0));
        label_11->setText(QApplication::translate("UserDialog", "Expiration date", 0));
        label_3->setText(QApplication::translate("UserDialog", "Quantity to order", 0));
        commandButton->setText(QApplication::translate("UserDialog", "Add to basket", 0));
        label_14->setText(QApplication::translate("UserDialog", "If you're interested in discovering the top-selling items ", 0));
        label_15->setText(QApplication::translate("UserDialog", " click on the button below :", 0));
        button_stat->setText(QApplication::translate("UserDialog", "Stats", 0));
        Search_bar->setInputMask(QString());
        SearchButton->setText(QApplication::translate("UserDialog", "Search", 0));
        InitButton->setText(QApplication::translate("UserDialog", "Init", 0));
        tabWidget->setTabText(tabWidget->indexOf(Produit), QApplication::translate("UserDialog", "Product", 0));
        label->setText(QApplication::translate("UserDialog", "CART SUMMARY:", 0));
        label_5->setText(QApplication::translate("UserDialog", "Subtotal", 0));
        label_sum->setText(QApplication::translate("UserDialog", "0", 0));
        label_6->setText(QApplication::translate("UserDialog", "TND", 0));
        label_7->setText(QApplication::translate("UserDialog", "Free shipping !", 0));
        Commander_button->setText(QApplication::translate("UserDialog", "Confirm order", 0));
        pushButton->setText(QApplication::translate("UserDialog", "Cancel order", 0));
        label_12->setText(QApplication::translate("UserDialog", "Refund is easy !", 0));
        label_13->setText(QApplication::translate("UserDialog", "Refund within 10 days", 0));
        tabWidget->setTabText(tabWidget->indexOf(Panier), QApplication::translate("UserDialog", "Basket", 0));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
