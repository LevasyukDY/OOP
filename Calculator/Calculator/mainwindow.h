#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QIcon>
#include <QKeyEvent>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_erase_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_sign_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_equally_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_exp_clicked();

    void on_pushButton_ln_clicked();

    void on_pushButton_sqrt_clicked();

    void on_pushButton_x2_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_pow_clicked();

private:
    Ui::MainWindow *ui;

    Calculator num; // переменная для вычислений
    Calculator temp; // переменная для вывода истории

    bool flag = 0,
         note = 0; // для добавления в историю вычислений

    // функция добавления текста на экран
    void addLabel(QPushButton *button, QLabel *label);

    // функция для проверки операции
    void checkOperation();

    // функция для добавления операций в поле history
    void setHistory(QPushButton *button, QString str);

};
#endif // MAINWINDOW_H
