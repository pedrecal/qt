/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *customPlot;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *LoadButton;
    QSlider *slider;
    QPushButton *histBt;
    QPushButton *eqBt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1153, 586);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(530, 100, 601, 411));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 100, 511, 371));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 509, 369));
        scrollArea->setWidget(scrollAreaWidgetContents);
        LoadButton = new QPushButton(centralWidget);
        LoadButton->setObjectName(QStringLiteral("LoadButton"));
        LoadButton->setGeometry(QRect(10, 60, 98, 33));
        slider = new QSlider(centralWidget);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setGeometry(QRect(10, 480, 501, 17));
        slider->setMinimum(-200);
        slider->setMaximum(200);
        slider->setSingleStep(10);
        slider->setPageStep(30);
        slider->setOrientation(Qt::Horizontal);
        histBt = new QPushButton(centralWidget);
        histBt->setObjectName(QStringLiteral("histBt"));
        histBt->setGeometry(QRect(140, 60, 151, 33));
        eqBt = new QPushButton(centralWidget);
        eqBt->setObjectName(QStringLiteral("eqBt"));
        eqBt->setGeometry(QRect(370, 60, 98, 33));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1153, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        LoadButton->setText(QApplication::translate("MainWindow", "Load Image", 0));
        histBt->setText(QApplication::translate("MainWindow", "Generate Histogram", 0));
        eqBt->setText(QApplication::translate("MainWindow", "Equalize", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
