/********************************************************************************
** Form generated from reading UI file 'querytwo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYTWO_H
#define UI_QUERYTWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Querytwo
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Querytwo)
    {
        if (Querytwo->objectName().isEmpty())
            Querytwo->setObjectName(QStringLiteral("Querytwo"));
        Querytwo->resize(400, 300);
        buttonBox = new QDialogButtonBox(Querytwo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(Querytwo);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 30, 141, 31));
        label = new QLabel(Querytwo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 191, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Querytwo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 121, 16));
        label_3 = new QLabel(Querytwo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 191, 31));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(Querytwo);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 90, 141, 31));

        retranslateUi(Querytwo);
        QObject::connect(buttonBox, SIGNAL(accepted()), Querytwo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Querytwo, SLOT(reject()));

        QMetaObject::connectSlotsByName(Querytwo);
    } // setupUi

    void retranslateUi(QDialog *Querytwo)
    {
        Querytwo->setWindowTitle(QApplication::translate("Querytwo", "Dialog", 0));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("Querytwo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 1 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Querytwo", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 2 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200", 0));
        lineEdit_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Querytwo: public Ui_Querytwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYTWO_H
