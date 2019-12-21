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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_division;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_x2;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sign;
    QLabel *display;
    QTextEdit *history;
    QLabel *labelHISTORY;
    QPushButton *pushButton_erase;
    QRadioButton *radioButton_deg;
    QRadioButton *radioButton_rad;
    QPushButton *pushButton_pow;
    QLabel *labelOPERATIONS;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(531, 416);
        MainWindow->setMinimumSize(QSize(531, 416));
        MainWindow->setMaximumSize(QSize(531, 416));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(26, 26, 26, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(20, 330, 111, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 280, 51, 41));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 280, 51, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 280, 51, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 230, 51, 41));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 230, 51, 41));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 230, 51, 41));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 180, 51, 41));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 180, 51, 41));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(140, 180, 51, 41));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(140, 330, 51, 41));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #e3e3e3;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e3e3e3, stop: 1 #c6c6c6);\n"
"}"));
        pushButton_equally = new QPushButton(centralwidget);
        pushButton_equally->setObjectName(QString::fromUtf8("pushButton_equally"));
        pushButton_equally->setGeometry(QRect(200, 280, 51, 91));
        pushButton_equally->setFont(font);
        pushButton_equally->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #ecb133;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ecb133, stop: 1 #ee7f09);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(200, 230, 51, 41));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #ecb133;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ecb133, stop: 1 #ee7f09);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(200, 180, 51, 41));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #ecb133;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ecb133, stop: 1 #ee7f09);\n"
"}"));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(200, 130, 51, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_mult->setFont(font1);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #ecb133;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ecb133, stop: 1 #ee7f09);\n"
"}"));
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName(QString::fromUtf8("pushButton_division"));
        pushButton_division->setGeometry(QRect(200, 80, 51, 41));
        pushButton_division->setFont(font);
        pushButton_division->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #ecb133;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ecb133, stop: 1 #ee7f09);\n"
"}"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(20, 50, 51, 21));
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #d86464;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d86464, stop: 1 #aa4c4c);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(80, 120, 51, 21));
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_x2 = new QPushButton(centralwidget);
        pushButton_x2->setObjectName(QString::fromUtf8("pushButton_x2"));
        pushButton_x2->setGeometry(QRect(20, 120, 51, 21));
        pushButton_x2->setFont(font);
        pushButton_x2->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(140, 120, 51, 21));
        pushButton_ln->setFont(font);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_exp = new QPushButton(centralwidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        pushButton_exp->setGeometry(QRect(140, 80, 51, 31));
        pushButton_exp->setFont(font);
        pushButton_exp->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(20, 150, 51, 21));
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(80, 150, 51, 21));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(140, 150, 51, 21));
        pushButton_tan->setFont(font);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        pushButton_sign = new QPushButton(centralwidget);
        pushButton_sign->setObjectName(QString::fromUtf8("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(80, 80, 51, 31));
        pushButton_sign->setFont(font);
        pushButton_sign->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        display = new QLabel(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(20, 10, 231, 41));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(180, 229, 238, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        display->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setWeight(50);
        display->setFont(font2);
        display->setLayoutDirection(Qt::LeftToRight);
        display->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"  background-color: #b4e5ee;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        display->setMargin(5);
        history = new QTextEdit(centralwidget);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(270, 40, 241, 331));
        history->setReadOnly(true);
        labelHISTORY = new QLabel(centralwidget);
        labelHISTORY->setObjectName(QString::fromUtf8("labelHISTORY"));
        labelHISTORY->setGeometry(QRect(320, 10, 131, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        labelHISTORY->setPalette(palette2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(17);
        font3.setBold(false);
        font3.setWeight(50);
        labelHISTORY->setFont(font3);
        labelHISTORY->setLayoutDirection(Qt::LeftToRight);
        labelHISTORY->setStyleSheet(QString::fromUtf8(""));
        labelHISTORY->setAlignment(Qt::AlignCenter);
        pushButton_erase = new QPushButton(centralwidget);
        pushButton_erase->setObjectName(QString::fromUtf8("pushButton_erase"));
        pushButton_erase->setGeometry(QRect(200, 50, 51, 20));
        pushButton_erase->setFont(font);
        pushButton_erase->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #d86464;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d86464, stop: 1 #aa4c4c);\n"
"}"));
        radioButton_deg = new QRadioButton(centralwidget);
        radioButton_deg->setObjectName(QString::fromUtf8("radioButton_deg"));
        radioButton_deg->setEnabled(true);
        radioButton_deg->setGeometry(QRect(80, 50, 41, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        radioButton_deg->setPalette(palette3);
        radioButton_deg->setChecked(true);
        radioButton_rad = new QRadioButton(centralwidget);
        radioButton_rad->setObjectName(QString::fromUtf8("radioButton_rad"));
        radioButton_rad->setGeometry(QRect(140, 50, 41, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        radioButton_rad->setPalette(palette4);
        radioButton_rad->setChecked(false);
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(20, 80, 51, 31));
        pushButton_pow->setFont(font);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  background-color: #949494;\n"
"   border: 0px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #949494, stop: 1 #7b7b7b);\n"
"}"));
        labelOPERATIONS = new QLabel(centralwidget);
        labelOPERATIONS->setObjectName(QString::fromUtf8("labelOPERATIONS"));
        labelOPERATIONS->setGeometry(QRect(250, 10, 31, 16));
        labelOPERATIONS->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"  background-color: #b4e5ee;\n"
"}"));
        labelOPERATIONS->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 531, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_equally->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        pushButton_x2->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_sign->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        display->setText(QString());
        labelHISTORY->setText(QCoreApplication::translate("MainWindow", "\320\230\320\241\320\242\320\236\320\240\320\230\320\257:", nullptr));
        pushButton_erase->setText(QCoreApplication::translate("MainWindow", "\302\253", nullptr));
        radioButton_deg->setText(QCoreApplication::translate("MainWindow", "Deg", nullptr));
        radioButton_rad->setText(QCoreApplication::translate("MainWindow", "Rad", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "x^n", nullptr));
        labelOPERATIONS->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
