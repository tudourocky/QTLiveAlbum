/********************************************************************************
** Form generated from reading UI file 'protree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROTREE_H
#define UI_PROTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProTree
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_pro;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *ProTree)
    {
        if (ProTree->objectName().isEmpty())
            ProTree->setObjectName(QString::fromUtf8("ProTree"));
        ProTree->resize(400, 300);
        gridLayout = new QGridLayout(ProTree);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_pro = new QLabel(ProTree);
        label_pro->setObjectName(QString::fromUtf8("label_pro"));

        verticalLayout->addWidget(label_pro);

        treeWidget = new QTreeWidget(ProTree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 20);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ProTree);

        QMetaObject::connectSlotsByName(ProTree);
    } // setupUi

    void retranslateUi(QDialog *ProTree)
    {
        ProTree->setWindowTitle(QCoreApplication::translate("ProTree", "Dialog", nullptr));
        label_pro->setText(QCoreApplication::translate("ProTree", "Project Directories:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProTree: public Ui_ProTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROTREE_H
