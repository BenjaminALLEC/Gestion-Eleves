/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBoxSection;
    QPushButton *pushButtonAddSection;
    QTableWidget *tableWidgetStudent;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelFirstName;
    QLabel *labelLastName;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditFirstName;
    QLineEdit *lineEditLastName;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonAddStudent;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidgetSubject;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelOther;
    QComboBox *comboBoxSubject;
    QPushButton *pushButtonCreateSubject;
    QPushButton *pushButtonAddSubject;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFichier;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(746, 440);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBoxSection = new QComboBox(centralWidget);
        comboBoxSection->setObjectName(QString::fromUtf8("comboBoxSection"));

        horizontalLayout_4->addWidget(comboBoxSection);

        pushButtonAddSection = new QPushButton(centralWidget);
        pushButtonAddSection->setObjectName(QString::fromUtf8("pushButtonAddSection"));

        horizontalLayout_4->addWidget(pushButtonAddSection);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tableWidgetStudent = new QTableWidget(centralWidget);
        if (tableWidgetStudent->columnCount() < 2)
            tableWidgetStudent->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetStudent->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetStudent->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetStudent->setObjectName(QString::fromUtf8("tableWidgetStudent"));

        verticalLayout_5->addWidget(tableWidgetStudent);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelFirstName = new QLabel(centralWidget);
        labelFirstName->setObjectName(QString::fromUtf8("labelFirstName"));

        verticalLayout->addWidget(labelFirstName);

        labelLastName = new QLabel(centralWidget);
        labelLastName->setObjectName(QString::fromUtf8("labelLastName"));

        verticalLayout->addWidget(labelLastName);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditFirstName = new QLineEdit(centralWidget);
        lineEditFirstName->setObjectName(QString::fromUtf8("lineEditFirstName"));

        verticalLayout_2->addWidget(lineEditFirstName);

        lineEditLastName = new QLineEdit(centralWidget);
        lineEditLastName->setObjectName(QString::fromUtf8("lineEditLastName"));

        verticalLayout_2->addWidget(lineEditLastName);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButtonAddStudent = new QPushButton(centralWidget);
        pushButtonAddStudent->setObjectName(QString::fromUtf8("pushButtonAddStudent"));

        verticalLayout_3->addWidget(pushButtonAddStudent);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidgetSubject = new QTableWidget(centralWidget);
        if (tableWidgetSubject->columnCount() < 2)
            tableWidgetSubject->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetSubject->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetSubject->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidgetSubject->setObjectName(QString::fromUtf8("tableWidgetSubject"));

        verticalLayout_4->addWidget(tableWidgetSubject);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelOther = new QLabel(centralWidget);
        labelOther->setObjectName(QString::fromUtf8("labelOther"));

        horizontalLayout->addWidget(labelOther);

        comboBoxSubject = new QComboBox(centralWidget);
        comboBoxSubject->setObjectName(QString::fromUtf8("comboBoxSubject"));

        horizontalLayout->addWidget(comboBoxSubject);

        pushButtonCreateSubject = new QPushButton(centralWidget);
        pushButtonCreateSubject->setObjectName(QString::fromUtf8("pushButtonCreateSubject"));

        horizontalLayout->addWidget(pushButtonCreateSubject);

        pushButtonAddSubject = new QPushButton(centralWidget);
        pushButtonAddSubject->setObjectName(QString::fromUtf8("pushButtonAddSubject"));

        horizontalLayout->addWidget(pushButtonAddSubject);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 746, 27));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PupilsManagement", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        pushButtonAddSection->setText(QApplication::translate("MainWindow", "&Add section", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetStudent->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "First name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetStudent->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Last name", 0, QApplication::UnicodeUTF8));
        labelFirstName->setText(QApplication::translate("MainWindow", "First name", 0, QApplication::UnicodeUTF8));
        labelLastName->setText(QApplication::translate("MainWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        pushButtonAddStudent->setText(QApplication::translate("MainWindow", "&Add student", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetSubject->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Subject", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetSubject->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Coefficient", 0, QApplication::UnicodeUTF8));
        labelOther->setText(QApplication::translate("MainWindow", "Others : ", 0, QApplication::UnicodeUTF8));
        pushButtonCreateSubject->setText(QApplication::translate("MainWindow", "&Create subject", 0, QApplication::UnicodeUTF8));
        pushButtonAddSubject->setText(QApplication::translate("MainWindow", "&Add subject", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
