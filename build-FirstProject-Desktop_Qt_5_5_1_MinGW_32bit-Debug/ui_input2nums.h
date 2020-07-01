/********************************************************************************
** Form generated from reading UI file 'input2nums.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT2NUMS_H
#define UI_INPUT2NUMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Input2Nums
{
public:

    void setupUi(QDialog *Input2Nums)
    {
        if (Input2Nums->objectName().isEmpty())
            Input2Nums->setObjectName(QStringLiteral("Input2Nums"));
        Input2Nums->resize(628, 328);

        retranslateUi(Input2Nums);

        QMetaObject::connectSlotsByName(Input2Nums);
    } // setupUi

    void retranslateUi(QDialog *Input2Nums)
    {
        Input2Nums->setWindowTitle(QApplication::translate("Input2Nums", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Input2Nums: public Ui_Input2Nums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT2NUMS_H
