/********************************************************************************
** Form generated from reading UI file 'dialogsubject.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSUBJECT_H
#define UI_DIALOGSUBJECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSubject
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSubject;
    QLineEdit *lineEditSubject;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCoef;
    QSpinBox *spinBoxCoef;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSubject)
    {
        if (DialogSubject->objectName().isEmpty())
            DialogSubject->setObjectName(QString::fromUtf8("DialogSubject"));
        DialogSubject->resize(238, 131);
        verticalLayout = new QVBoxLayout(DialogSubject);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelSubject = new QLabel(DialogSubject);
        labelSubject->setObjectName(QString::fromUtf8("labelSubject"));

        horizontalLayout->addWidget(labelSubject);

        lineEditSubject = new QLineEdit(DialogSubject);
        lineEditSubject->setObjectName(QString::fromUtf8("lineEditSubject"));

        horizontalLayout->addWidget(lineEditSubject);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelCoef = new QLabel(DialogSubject);
        labelCoef->setObjectName(QString::fromUtf8("labelCoef"));

        horizontalLayout_2->addWidget(labelCoef);

        spinBoxCoef = new QSpinBox(DialogSubject);
        spinBoxCoef->setObjectName(QString::fromUtf8("spinBoxCoef"));

        horizontalLayout_2->addWidget(spinBoxCoef);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(DialogSubject);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogSubject);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSubject, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSubject, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSubject);
    } // setupUi

    void retranslateUi(QDialog *DialogSubject)
    {
        DialogSubject->setWindowTitle(QApplication::translate("DialogSubject", "Dialog", 0, QApplication::UnicodeUTF8));
        labelSubject->setText(QApplication::translate("DialogSubject", "Subject", 0, QApplication::UnicodeUTF8));
        labelCoef->setText(QApplication::translate("DialogSubject", "Coefficient", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSubject: public Ui_DialogSubject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSUBJECT_H
