/********************************************************************************
** Form generated from reading UI file 'dialogsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETTINGS_H
#define UI_DIALOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSettings
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *Label;
    QComboBox *ComboBox;
    QLabel *Label_2;
    QLineEdit *LineEdit;
    QLabel *Label_3;
    QLineEdit *LineEdit_2;
    QLabel *Label_4;
    QLineEdit *LineEdit_3;
    QLabel *Label_5;
    QLineEdit *LineEdit_4;

    void setupUi(QDialog *DialogSettings)
    {
        if (DialogSettings->objectName().isEmpty())
            DialogSettings->setObjectName(QStringLiteral("DialogSettings"));
        DialogSettings->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(DialogSettings);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(79, 9, 251, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Label = new QLabel(formLayoutWidget);
        Label->setObjectName(QStringLiteral("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        ComboBox = new QComboBox(formLayoutWidget);
        ComboBox->setObjectName(QStringLiteral("ComboBox"));
        ComboBox->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(0, QFormLayout::FieldRole, ComboBox);

        Label_2 = new QLabel(formLayoutWidget);
        Label_2->setObjectName(QStringLiteral("Label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        LineEdit = new QLineEdit(formLayoutWidget);
        LineEdit->setObjectName(QStringLiteral("LineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, LineEdit);

        Label_3 = new QLabel(formLayoutWidget);
        Label_3->setObjectName(QStringLiteral("Label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        LineEdit_2 = new QLineEdit(formLayoutWidget);
        LineEdit_2->setObjectName(QStringLiteral("LineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, LineEdit_2);

        Label_4 = new QLabel(formLayoutWidget);
        Label_4->setObjectName(QStringLiteral("Label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_4);

        LineEdit_3 = new QLineEdit(formLayoutWidget);
        LineEdit_3->setObjectName(QStringLiteral("LineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, LineEdit_3);

        Label_5 = new QLabel(formLayoutWidget);
        Label_5->setObjectName(QStringLiteral("Label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_5);

        LineEdit_4 = new QLineEdit(formLayoutWidget);
        LineEdit_4->setObjectName(QStringLiteral("LineEdit_4"));
        LineEdit_4->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, LineEdit_4);


        retranslateUi(DialogSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSettings, SLOT(reject()));
        QObject::connect(DialogSettings, SIGNAL(accepted()), DialogSettings, SLOT(slot1()));

        QMetaObject::connectSlotsByName(DialogSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogSettings)
    {
        DialogSettings->setWindowTitle(QApplication::translate("DialogSettings", "\320\244\320\276\321\200\320\274\320\260 \320\262\320\262\320\276\320\264\320\260", 0));
        Label->setText(QApplication::translate("DialogSettings", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\321\200\320\260\320\271\320\262\320\265\321\200 \320\221\320\224", 0));
        Label_2->setText(QApplication::translate("DialogSettings", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", 0));
        Label_3->setText(QApplication::translate("DialogSettings", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\221\320\224", 0));
        Label_4->setText(QApplication::translate("DialogSettings", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        Label_5->setText(QApplication::translate("DialogSettings", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        LineEdit_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogSettings: public Ui_DialogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETTINGS_H
