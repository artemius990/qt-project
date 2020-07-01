/********************************************************************************
** Form generated from reading UI file 'querywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYWINDOW_H
#define UI_QUERYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QueryWindow)
    {
        if (QueryWindow->objectName().isEmpty())
            QueryWindow->setObjectName(QStringLiteral("QueryWindow"));
        QueryWindow->resize(564, 478);
        centralwidget = new QWidget(QueryWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        QueryWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QueryWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QueryWindow->setStatusBar(statusbar);

        retranslateUi(QueryWindow);

        QMetaObject::connectSlotsByName(QueryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QueryWindow)
    {
        QueryWindow->setWindowTitle(QApplication::translate("QueryWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class QueryWindow: public Ui_QueryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWINDOW_H
