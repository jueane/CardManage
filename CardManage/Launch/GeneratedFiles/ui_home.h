/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HomeClass)
    {
        if (HomeClass->objectName().isEmpty())
            HomeClass->setObjectName(QStringLiteral("HomeClass"));
        HomeClass->resize(600, 400);
        centralWidget = new QWidget(HomeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 20, 75, 31));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 70, 521, 181));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 43, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(178, 20, 261, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 20, 75, 31));
        HomeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HomeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        HomeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HomeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HomeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HomeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HomeClass->setStatusBar(statusBar);

        retranslateUi(HomeClass);

        QMetaObject::connectSlotsByName(HomeClass);
    } // setupUi

    void retranslateUi(QMainWindow *HomeClass)
    {
        HomeClass->setWindowTitle(QApplication::translate("HomeClass", "Home", 0));
        pushButton_3->setText(QApplication::translate("HomeClass", "Add", 0));
        label->setText(QApplication::translate("HomeClass", "Card No:", 0));
        pushButton->setText(QApplication::translate("HomeClass", "search", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeClass: public Ui_HomeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
