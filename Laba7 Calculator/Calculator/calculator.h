#ifndef CALCULATOR_H
#define CALCULATOR_H

#define M_PI 3.14159265358979323846264338327950288

#include <math.h>
#include <QString>

// Класс Калькулятор
class Calculator
{
    double value; // значение
    QString operation; // переменная для определения операции

public:
    // Исключения
    enum ERRORS {
     error
    };


    Calculator();
    Calculator(double value1); // к. с параметром

    void setValue(double value1); // задать значение
    double getValue() const;      // получить значение
    void setOperation(QString operation1);
    QString getOperation() const;

    void operator += (double value1); // Оператор сложения
    void operator -= (double value1); // Оператор вычитания
    void operator *= (double value1); // Оператор умножения
    void operator /= (double value1); // Оператор деления

    double exprValue(); // exp
    double sqrtValue(); // sqrt
    double lnValue();   // ln
    double sinValue(bool isDeg);  // sin
    double cosValue(bool isDeg);  // cos
    double tgValue(bool isDeg);   // tg
    double sqrValue();             // Возведение в квадрат
    double powValue(double power); // Возведение в степень
};

#endif // CALCULATOR_H
