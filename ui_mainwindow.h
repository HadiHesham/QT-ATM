/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *ClientName;
    QLabel *AccBalance;
    QLabel *Bal;
    QLabel *Name;
    QLabel *Num;
    QLabel *AccNumber;
    QPushButton *Deposit;
    QPushButton *WithDraw;
    QPushButton *Clear;
    QPushButton *ViewTransactions;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(415, 467);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ClientName = new QLabel(centralwidget);
        ClientName->setObjectName(QString::fromUtf8("ClientName"));
        ClientName->setGeometry(QRect(40, 20, 141, 31));
        AccBalance = new QLabel(centralwidget);
        AccBalance->setObjectName(QString::fromUtf8("AccBalance"));
        AccBalance->setGeometry(QRect(40, 110, 141, 31));
        Bal = new QLabel(centralwidget);
        Bal->setObjectName(QString::fromUtf8("Bal"));
        Bal->setGeometry(QRect(240, 110, 141, 31));
        Name = new QLabel(centralwidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(240, 20, 141, 31));
        Num = new QLabel(centralwidget);
        Num->setObjectName(QString::fromUtf8("Num"));
        Num->setGeometry(QRect(240, 60, 141, 31));
        AccNumber = new QLabel(centralwidget);
        AccNumber->setObjectName(QString::fromUtf8("AccNumber"));
        AccNumber->setGeometry(QRect(40, 60, 141, 31));
        Deposit = new QPushButton(centralwidget);
        Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->setGeometry(QRect(40, 160, 100, 32));
        WithDraw = new QPushButton(centralwidget);
        WithDraw->setObjectName(QString::fromUtf8("WithDraw"));
        WithDraw->setGeometry(QRect(40, 210, 100, 32));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(240, 210, 121, 32));
        ViewTransactions = new QPushButton(centralwidget);
        ViewTransactions->setObjectName(QString::fromUtf8("ViewTransactions"));
        ViewTransactions->setGeometry(QRect(40, 250, 321, 32));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 160, 121, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 415, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ClientName->setText(QCoreApplication::translate("MainWindow", "Client Name:", nullptr));
        AccBalance->setText(QCoreApplication::translate("MainWindow", "Account Balance", nullptr));
        Bal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Name->setText(QCoreApplication::translate("MainWindow", "Hadi", nullptr));
        Num->setText(QCoreApplication::translate("MainWindow", "624173", nullptr));
        AccNumber->setText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        Deposit->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        WithDraw->setText(QCoreApplication::translate("MainWindow", "WithDraw", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ViewTransactions->setText(QCoreApplication::translate("MainWindow", "View Transaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
