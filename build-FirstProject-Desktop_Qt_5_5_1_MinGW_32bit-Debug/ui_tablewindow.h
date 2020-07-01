/********************************************************************************
** Form generated from reading UI file 'tablewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWINDOW_H
#define UI_TABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableWindow
{
public:
    QAction *actionAddRow;
    QAction *actionRemoveRow;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TableWindow)
    {
        if (TableWindow->objectName().isEmpty())
            TableWindow->setObjectName(QStringLiteral("TableWindow"));
        TableWindow->resize(800, 600);
        actionAddRow = new QAction(TableWindow);
        actionAddRow->setObjectName(QStringLiteral("actionAddRow"));
        actionRemoveRow = new QAction(TableWindow);
        actionRemoveRow->setObjectName(QStringLiteral("actionRemoveRow"));
        centralwidget = new QWidget(TableWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        TableWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TableWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        TableWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TableWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TableWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAddRow);
        menu->addAction(actionRemoveRow);

        retranslateUi(TableWindow);

        QMetaObject::connectSlotsByName(TableWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TableWindow)
    {
        TableWindow->setWindowTitle(QApplication::translate("TableWindow", "MainWindow", 0));
        actionAddRow->setText(QApplication::translate("TableWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203 \320\262 \320\272\320\276\320\275\320\265\321\206 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        actionRemoveRow->setText(QApplication::translate("TableWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", 0));
        menu->setTitle(QApplication::translate("TableWindow", "\320\241\321\202\321\200\320\276\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class TableWindow: public Ui_TableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWINDOW_H
