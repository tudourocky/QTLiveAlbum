/********************************************************************************
** Form generated from reading UI file 'confirmpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPAGE_H
#define UI_CONFIRMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QWizardPage *ConfirmPage)
    {
        if (ConfirmPage->objectName().isEmpty())
            ConfirmPage->setObjectName(QString::fromUtf8("ConfirmPage"));
        ConfirmPage->resize(639, 472);
        gridLayout = new QGridLayout(ConfirmPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ConfirmPage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_2->addWidget(label);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(ConfirmPage);

        QMetaObject::connectSlotsByName(ConfirmPage);
    } // setupUi

    void retranslateUi(QWizardPage *ConfirmPage)
    {
        ConfirmPage->setWindowTitle(QCoreApplication::translate("ConfirmPage", "WizardPage", nullptr));
        label->setText(QCoreApplication::translate("ConfirmPage", "Click Finish to create! You can also click Cancel to cancel the creation.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPage: public Ui_ConfirmPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPAGE_H
