/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_gen_array;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_n;
    QSpinBox *spinBox_n_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_file2arr;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_arr2file;
    QPushButton *pushButton_clr;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(646, 535);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_gen_array = new QPushButton(centralwidget);
        pushButton_gen_array->setObjectName(QString::fromUtf8("pushButton_gen_array"));
        pushButton_gen_array->setMaximumSize(QSize(150, 23));

        horizontalLayout_4->addWidget(pushButton_gen_array);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(22);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_n = new QSpinBox(centralwidget);
        spinBox_n->setObjectName(QString::fromUtf8("spinBox_n"));
        spinBox_n->setMaximumSize(QSize(100, 20));
        spinBox_n->setMaximum(9999);
        spinBox_n->setValue(5);

        horizontalLayout->addWidget(spinBox_n);

        spinBox_n_2 = new QSpinBox(centralwidget);
        spinBox_n_2->setObjectName(QString::fromUtf8("spinBox_n_2"));
        spinBox_n_2->setMaximumSize(QSize(100, 20));
        spinBox_n_2->setMaximum(9999);
        spinBox_n_2->setValue(5);

        horizontalLayout->addWidget(spinBox_n_2);


        horizontalLayout_5->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_file2arr = new QPushButton(centralwidget);
        pushButton_file2arr->setObjectName(QString::fromUtf8("pushButton_file2arr"));
        pushButton_file2arr->setEnabled(false);
        pushButton_file2arr->setMaximumSize(QSize(150, 23));
        pushButton_file2arr->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(pushButton_file2arr);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_arr2file = new QPushButton(centralwidget);
        pushButton_arr2file->setObjectName(QString::fromUtf8("pushButton_arr2file"));
        pushButton_arr2file->setEnabled(false);
        pushButton_arr2file->setMaximumSize(QSize(95, 23));

        horizontalLayout_3->addWidget(pushButton_arr2file);

        pushButton_clr = new QPushButton(centralwidget);
        pushButton_clr->setObjectName(QString::fromUtf8("pushButton_clr"));
        pushButton_clr->setEnabled(true);
        pushButton_clr->setMaximumSize(QSize(84, 23));

        horizontalLayout_3->addWidget(pushButton_clr);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);
        tableWidget->horizontalHeader()->setDefaultSectionSize(50);
        tableWidget->verticalHeader()->setDefaultSectionSize(23);

        verticalLayout_3->addWidget(tableWidget);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 646, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1. \320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265 \320\274\320\260\321\201\321\201\320\270\320\262\320\260 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\274\320\270 \321\207\320\270\321\201\320\273\320\260\320\274\320\270 \320\270 \321\200\320\260\320\261\320\276\321\202\320\260 \321\201 \321\204\320\260\320\271\320\273\320\260\320\274\320\270", nullptr));
        pushButton_gen_array->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262", nullptr));
        pushButton_file2arr->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_arr2file->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_clr->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
