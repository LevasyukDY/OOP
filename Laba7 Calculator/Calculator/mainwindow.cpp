#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display->setText("0");
    ui->pushButton_pow->setText('x' + QChar(8319));
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addLabel(QPushButton *button, QLabel *label)
{
    QString all_numbers; // переменная для записи всех чисел в строку

    if (flag)
    {
        label->setText(button->text());
        flag = 0;
        return;
    }

    if (label->text() == "0")
        label->setText(button->text());
    else
    {
        all_numbers = (ui->display->text() + button->text());
        label->setText(all_numbers);
    }
}


void MainWindow::on_pushButton_1_clicked()
{
    addLabel(ui->pushButton_1, ui->display);
}


void MainWindow::on_pushButton_2_clicked()
{
    addLabel(ui->pushButton_2, ui->display);
}


void MainWindow::on_pushButton_3_clicked()
{
    addLabel(ui->pushButton_3, ui->display);
}


void MainWindow::on_pushButton_4_clicked()
{
    addLabel(ui->pushButton_4, ui->display);
}


void MainWindow::on_pushButton_5_clicked()
{
    addLabel(ui->pushButton_5, ui->display);
}


void MainWindow::on_pushButton_6_clicked()
{
    addLabel(ui->pushButton_6, ui->display);
}


void MainWindow::on_pushButton_7_clicked()
{
    addLabel(ui->pushButton_7, ui->display);
}


void MainWindow::on_pushButton_8_clicked()
{
    addLabel(ui->pushButton_8, ui->display);
}


void MainWindow::on_pushButton_9_clicked()
{
    addLabel(ui->pushButton_9, ui->display);
}


void MainWindow::on_pushButton_0_clicked()
{
    addLabel(ui->pushButton_0, ui->display);
}


void MainWindow::on_pushButton_clear_clicked()
{
    if (num.getValue() != 0.0)
        num.setValue(0);
    ui->display->setText("0");
    num.setOperation("");
}


void MainWindow::on_pushButton_erase_clicked()
{
    QString str;
    str = ui->display->text();
    int size = str.size();
    str.resize(size-1);
    if (str == "") str = "0";
    ui->display->setText(str);
}


void MainWindow::on_pushButton_dot_clicked()
{
    // если в строке нет символа точки, то добавляем его
    if (!(ui->display->text().contains('.')))
        ui->display->setText(ui->display->text() + ".");

}


void MainWindow::on_pushButton_sign_clicked()
{
   double res = ui->display->text().toDouble() * (-1.0);
   ui->display->setText(QString::number(res));
}


void MainWindow::checkOperation()
{
    if (num.getOperation() == "+")
    {
        temp = num;
        num += ui->display->text().toDouble();
        ui->history->append(QString::number(temp.getValue())+ " " + num.getOperation() + " "
                            + QString::number(ui->display->text().toDouble()) + " = "
                            + QString::number(num.getValue()));
    }

    if (num.getOperation() == "-")
    {
        temp = num;
        num -= ui->display->text().toDouble();
        ui->history->append(QString::number(temp.getValue())+ " " + num.getOperation() + " "
                            + QString::number(ui->display->text().toDouble()) + " = "
                            + QString::number(num.getValue()));
    }

    if (num.getOperation() == "*")
    {
        temp = num;
        num *= ui->display->text().toDouble();
        ui->history->append(QString::number(temp.getValue())+ " x "
                            + QString::number(ui->display->text().toDouble()) + " = "
                            + QString::number(num.getValue()));
    }

    try {
        if (num.getOperation() == "/")
        {
            temp = num;
            num /= ui->display->text().toDouble();
            ui->history->append(QString::number(temp.getValue())+ " ÷ "
                                + QString::number(ui->display->text().toDouble()) + " = "
                                + QString::number(num.getValue()));
        }
    } catch (Calculator::ERRORS e) {
        if (e == Calculator::error)
            ui->display->setText("Ошибка");
    }

    if (num.getOperation() == "pow")
    {
        temp = num;
        num.setValue(num.powValue(ui->display->text().toDouble()));
        ui->history->append(QString::number(temp.getValue())+ "^"
                            + QString::number(ui->display->text().toDouble()) + " = "
                            + QString::number(num.getValue()));
    }

}


void MainWindow::on_pushButton_equally_clicked()
{
    checkOperation();
    ui->pushButton_plus->setDefault(0);
    ui->pushButton_minus->setDefault(0);
    ui->pushButton_mult->setDefault(0);
    ui->pushButton_division->setDefault(0);
    ui->display->setText(QString::number(num.getValue()));
    num.setOperation("");
    ui->labelOPERATIONS->setText("=");
    flag = 0;
}


void MainWindow::on_pushButton_plus_clicked()
{
    ui->pushButton_plus->setDefault(1);
    flag = 1;
    num.setValue(ui->display->text().toDouble());
    num.setOperation("+");
    ui->labelOPERATIONS->setText("+");
}


void MainWindow::on_pushButton_minus_clicked()
{
    flag = 1;
    ui->pushButton_minus->setDefault(1);
    num.setValue(ui->display->text().toDouble());
    num.setOperation("-");
    ui->labelOPERATIONS->setText("-");
}


void MainWindow::on_pushButton_mult_clicked()
{
    flag = 1;
    ui->pushButton_mult->setDefault(1);
    num.setValue(ui->display->text().toDouble());
    num.setOperation("*");
    ui->labelOPERATIONS->setText("x");
}


void MainWindow::on_pushButton_division_clicked()
{
    flag = 1;
    ui->pushButton_division->setDefault(1);
    num.setValue(ui->display->text().toDouble());
    num.setOperation("/");
    ui->labelOPERATIONS->setText("÷");
}


void MainWindow::on_pushButton_exp_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());
    num.setValue(num.exprValue());
    ui->display->setText(QString::number(num.getValue()));
    ui->history->append("exp(" + str + ") = " + QString::number(num.getValue()));
    ui->labelOPERATIONS->setText("exp");
}


void MainWindow::on_pushButton_ln_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());

    try {
        num.setValue(num.lnValue());
        ui->display->setText(QString::number(num.getValue()));
        ui->history->append("ln(" + str + ") = " + QString::number(num.getValue()));
        ui->labelOPERATIONS->setText("ln");
    } catch (Calculator::ERRORS e) {
        if (e == Calculator::error)
            ui->display->setText("Ошибка");
    }
}



void MainWindow::on_pushButton_sqrt_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());

    try {
        num.setValue(num.sqrtValue());
        ui->display->setText(QString::number(num.getValue()));
        ui->history->append("√" + str + " = " + QString::number(num.getValue()));
        ui->labelOPERATIONS->setText("√x");
    } catch (Calculator::ERRORS e) {
        if (e == Calculator::error)
            ui->display->setText("Ошибка");
    }
}


void MainWindow::on_pushButton_x2_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());
    num.setValue(num.sqrValue());
    ui->display->setText(QString::number(num.getValue()));
    ui->history->append(str + "² = " + QString::number(num.getValue()));
    ui->labelOPERATIONS->setText("x²");
}


void MainWindow::on_pushButton_sin_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());
    num.setValue(num.sinValue(ui->radioButton_deg->isChecked()));
    ui->display->setText(QString::number(num.getValue()));
    ui->labelOPERATIONS->setText("sin");
    if (ui->radioButton_deg->isChecked())
        ui->history->append("sin(" + str + "°) = " + QString::number(num.getValue()));
    else
        ui->history->append("sin(" + str + ") = " + QString::number(num.getValue()));
}


void MainWindow::on_pushButton_cos_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());
    num.setValue(num.cosValue(ui->radioButton_deg->isChecked()));
    ui->display->setText(QString::number(num.getValue()));
    ui->labelOPERATIONS->setText("cos");
    if (ui->radioButton_deg->isChecked())
        ui->history->append("cos(" + str + "°) = " + QString::number(num.getValue()));
    else
        ui->history->append("cos(" + str + ") = " + QString::number(num.getValue()));
}


void MainWindow::on_pushButton_tan_clicked()
{
    QString str;
    str = ui->display->text();
    num.setValue(str.toDouble());
    num.setValue(num.tgValue(ui->radioButton_deg->isChecked()));
    ui->display->setText(QString::number(num.getValue()));
    ui->labelOPERATIONS->setText("tan");
    if (ui->radioButton_deg->isChecked())
        ui->history->append("tan(" + str + "°) = " + QString::number(num.getValue()));
    else
        ui->history->append("tan(" + str + ") = " + QString::number(num.getValue()));
}




void MainWindow::on_pushButton_pow_clicked()
{
    ui->pushButton_pow->setDefault(1);
    flag = 1;
    num.setValue(ui->display->text().toDouble());
    num.setOperation("pow");
    ui->labelOPERATIONS->setText('x' + QChar(8319));
}



