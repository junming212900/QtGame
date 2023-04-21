/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber2;
    QProgressBar *healthBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(968, 671);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, -20, 971, 711));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 170, 89, 25));
        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(360, 160, 89, 25));
        pushButton3 = new QPushButton(centralWidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(460, 160, 89, 25));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(240, 20, 64, 23));
        lcdNumber->setDigitCount(4);
        lcdNumber2 = new QLCDNumber(centralWidget);
        lcdNumber2->setObjectName("lcdNumber2");
        lcdNumber2->setGeometry(QRect(110, 80, 64, 23));
        lcdNumber2->setDigitCount(2);
        lcdNumber2->setProperty("intValue", QVariant(4));
        healthBar = new QProgressBar(centralWidget);
        healthBar->setObjectName("healthBar");
        healthBar->setGeometry(QRect(210, 250, 118, 23));
        healthBar->setAutoFillBackground(false);
        healthBar->setValue(100);
        healthBar->setTextVisible(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 968, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\342\234\277", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "\342\234\277", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "\342\234\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
