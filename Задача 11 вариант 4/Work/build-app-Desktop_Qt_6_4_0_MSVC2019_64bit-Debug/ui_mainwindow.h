/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditMain2C;
    QLabel *label_3;
    QLineEdit *lineEditMain2K;
    QLabel *label_4;
    QLineEdit *lineEditMain2U1;
    QLabel *label_5;
    QLineEdit *lineEditMain2U2;
    QLabel *label_6;
    QLineEdit *lineEditMain2B;
    QLabel *label_7;
    QLineEdit *lineEditMain2H0;
    QLabel *label_8;
    QLineEdit *lineEditMain2N;
    QPushButton *pushButtonMain2Run;
    QRadioButton *radioButtonMain2CLP;
    QLineEdit *lineEditMain2LP;
    QSpacerItem *verticalSpacer_3;
    QLabel *Label_1;
    QLineEdit *lineEditMain2M;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowserMain2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QCustomPlot *graphMain2Faz;
    QCustomPlot *graphMain2U1;
    QCustomPlot *graphMain2U2;
    QTableWidget *tableWidgetMain2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1469, 667);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_4 = new QHBoxLayout(tab);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame_3 = new QFrame(tab);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(frame_3);
        groupBox_5->setObjectName("groupBox_5");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setMaximumSize(QSize(16777215, 480));
        formLayout_3 = new QFormLayout(groupBox_5);
        formLayout_3->setObjectName("formLayout_3");
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEditMain2C = new QLineEdit(groupBox_5);
        lineEditMain2C->setObjectName("lineEditMain2C");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEditMain2C);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEditMain2K = new QLineEdit(groupBox_5);
        lineEditMain2K->setObjectName("lineEditMain2K");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEditMain2K);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEditMain2U1 = new QLineEdit(groupBox_5);
        lineEditMain2U1->setObjectName("lineEditMain2U1");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, lineEditMain2U1);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEditMain2U2 = new QLineEdit(groupBox_5);
        lineEditMain2U2->setObjectName("lineEditMain2U2");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, lineEditMain2U2);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_6);

        lineEditMain2B = new QLineEdit(groupBox_5);
        lineEditMain2B->setObjectName("lineEditMain2B");

        formLayout_3->setWidget(6, QFormLayout::FieldRole, lineEditMain2B);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_7);

        lineEditMain2H0 = new QLineEdit(groupBox_5);
        lineEditMain2H0->setObjectName("lineEditMain2H0");

        formLayout_3->setWidget(7, QFormLayout::FieldRole, lineEditMain2H0);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(8, QFormLayout::LabelRole, label_8);

        lineEditMain2N = new QLineEdit(groupBox_5);
        lineEditMain2N->setObjectName("lineEditMain2N");

        formLayout_3->setWidget(8, QFormLayout::FieldRole, lineEditMain2N);

        pushButtonMain2Run = new QPushButton(groupBox_5);
        pushButtonMain2Run->setObjectName("pushButtonMain2Run");

        formLayout_3->setWidget(13, QFormLayout::FieldRole, pushButtonMain2Run);

        radioButtonMain2CLP = new QRadioButton(groupBox_5);
        radioButtonMain2CLP->setObjectName("radioButtonMain2CLP");
        radioButtonMain2CLP->setChecked(false);

        formLayout_3->setWidget(11, QFormLayout::LabelRole, radioButtonMain2CLP);

        lineEditMain2LP = new QLineEdit(groupBox_5);
        lineEditMain2LP->setObjectName("lineEditMain2LP");

        formLayout_3->setWidget(11, QFormLayout::FieldRole, lineEditMain2LP);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(13, QFormLayout::LabelRole, verticalSpacer_3);

        Label_1 = new QLabel(groupBox_5);
        Label_1->setObjectName("Label_1");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, Label_1);

        lineEditMain2M = new QLineEdit(groupBox_5);
        lineEditMain2M->setObjectName("lineEditMain2M");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEditMain2M);

        textBrowser = new QTextBrowser(groupBox_5);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMaximumSize(QSize(1000, 130));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, textBrowser);


        verticalLayout_7->addWidget(groupBox_5);

        textBrowserMain2 = new QTextBrowser(frame_3);
        textBrowserMain2->setObjectName("textBrowserMain2");

        verticalLayout_7->addWidget(textBrowserMain2);


        horizontalLayout_4->addWidget(frame_3);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        graphMain2Faz = new QCustomPlot(groupBox_6);
        graphMain2Faz->setObjectName("graphMain2Faz");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphMain2Faz->sizePolicy().hasHeightForWidth());
        graphMain2Faz->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(graphMain2Faz);

        graphMain2U1 = new QCustomPlot(groupBox_6);
        graphMain2U1->setObjectName("graphMain2U1");
        sizePolicy2.setHeightForWidth(graphMain2U1->sizePolicy().hasHeightForWidth());
        graphMain2U1->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(graphMain2U1);

        graphMain2U2 = new QCustomPlot(groupBox_6);
        graphMain2U2->setObjectName("graphMain2U2");
        sizePolicy2.setHeightForWidth(graphMain2U2->sizePolicy().hasHeightForWidth());
        graphMain2U2->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(graphMain2U2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tableWidgetMain2 = new QTableWidget(groupBox_6);
        if (tableWidgetMain2->columnCount() < 11)
            tableWidgetMain2->setColumnCount(11);
        tableWidgetMain2->setObjectName("tableWidgetMain2");
        tableWidgetMain2->setMinimumSize(QSize(751, 0));
        tableWidgetMain2->setLineWidth(2);
        tableWidgetMain2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMain2->setColumnCount(11);

        verticalLayout_4->addWidget(tableWidgetMain2);


        horizontalLayout_4->addWidget(groupBox_6);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "NumericalMethodsLabApp", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\264\320\265\320\274\320\277\321\204\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217          c:", nullptr));
        lineEditMain2C->setText(QCoreApplication::translate("MainWindow", "0.15", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\266\320\265\321\201\321\202\320\272\320\276\321\201\321\202\320\270 \320\277\321\200\321\203\320\266\320\270\320\275\321\213    k:", nullptr));
        lineEditMain2K->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\263\321\200\321\203\320\267\320\260        u(0):", nullptr));
        lineEditMain2U1->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\263\321\200\321\203\320\267\320\260            u'(0):", nullptr));
        lineEditMain2U2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \321\201\321\207\321\221\321\202\320\260        x_max:", nullptr));
        lineEditMain2B->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\210\320\260\320\263                                h0:", nullptr));
        lineEditMain2H0->setText(QCoreApplication::translate("MainWindow", "0.01", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271 Nmax:", nullptr));
        lineEditMain2N->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        pushButtonMain2Run->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        radioButtonMain2CLP->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\320\276\320\271 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270", nullptr));
        lineEditMain2LP->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Label_1->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260 \320\263\321\200\321\203\320\267\320\260                                        m:", nullptr));
        lineEditMain2M->setText(QCoreApplication::translate("MainWindow", "1.0", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:8.83019pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\277\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\267\320\260\320\264\320\260\321\207\320\270:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\237\320\276\320\273\320\276\320"
                        "\266\320\265\320\275\320\270\320\265 \320\263\321\200\321\203\320\267\320\260 \320\262 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 \320\276\320\277\320\270\321\201\321\213\320\262\320\260\320\265\321\202 \320\273\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\224\320\243</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">mu'' + cu' + ku = 0;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">u (0) = u</span><span style=\" font-size:7pt;\">0</span><span style=\" font-size:12pt;\">;  u' (0) = u'</span><span style=\" font-size:7pt;\">0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">u = u(x) - \321\201\320"
                        "\274\320\265\321\211\320\265\320\275\320\270\320\265 \320\263\321\200\321\203\320\267\320\260 \320\262\320\264\320\276\320\273\321\214 \320\276\321\201\320\270 \320\260\320\261\321\201\321\206\320\270\321\201\321\201 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \321\200\320\260\320\262\320\275\320\276\320\262\320\265\321\201\320\270\321\217. x - \320\262\321\200\320\265\320\274\321\217.</span></p></body></html>", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \320\264\320\270\320\275\320\260\320\274\320\270\320\272\320\270 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \320\263\321\200\321\203\320\267\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
