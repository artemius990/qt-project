/********************************************************************************
** Form generated from reading UI file 'input2nums.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Input2Nums
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *num1Label;
    QSpinBox *num1SpinBox;

    void setupUi(QDialog *Input2Nums)
    {
        if (Input2Nums->objectName().isEmpty())
            Input2Nums->setObjectName(QStringLiteral("Input2Nums"));
        Input2Nums->resize(429, 166);
        buttonBox = new QDialogButtonBox(Input2Nums);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(210, 110, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        num1Label = new QLabel(Input2Nums);
        num1Label->setObjectName(QStringLiteral("num1Label"));
        num1Label->setGeometry(QRect(9, 35, 196, 28));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        num1Label->setFont(font1);
        num1SpinBox = new QSpinBox(Input2Nums);
        num1SpinBox->setObjectName(QStringLiteral("num1SpinBox"));
        num1SpinBox->setGeometry(QRect(230, 40, 181, 20));

        retranslateUi(Input2Nums);
        QObject::connect(buttonBox, SIGNAL(accepted()), Input2Nums, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Input2Nums, SLOT(reject()));

        QMetaObject::connectSlotsByName(Input2Nums);
    } // setupUi

    void retranslateUi(QDialog *Input2Nums)
    {
        Input2Nums->setWindowTitle(QApplication::translate("Input2Nums", "Dialog", 0));
        num1Label->setText(QApplication::translate("Input2Nums", "<font color=\"red\">\320\237\320\276\320\270\321\201\320\272 \321\201\321\202\321\200\320\276\320\272 \321\201 \320\272\320\273\321\216\321\207\320\276\320\274:</font>", 0));
    } // retranslateUi

};

namespace Ui {
    class Input2Nums: public Ui_Input2Nums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT2NUMS_H
