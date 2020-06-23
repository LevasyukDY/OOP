#include "calculator.h"

Calculator::Calculator()
{
    value = 0;
}


Calculator::Calculator(double value1)
{
    value = value1;
}


void Calculator::setValue(double value1)
{
    value = value1;
}


double Calculator::getValue() const
{
    return value;
}

void Calculator::setOperation(QString operation1)
{
    operation = operation1;
}


QString Calculator::getOperation() const
{
    return operation;
}


void Calculator::operator += (double value1)
{
    setValue(value + value1);
}


void Calculator::operator -= (double value1)
{
    setValue(value - value1);
}


void Calculator::operator *= (double value1)
{
    setValue(value * value1);
}


void Calculator::operator /= (double value1)
{
    if (value1 == 0.0) throw error;
    setValue(value / value1);
}


double Calculator::exprValue()
{
    return exp(value);
}


double Calculator::sqrtValue()
{
    if (value < 0) throw error;
    return sqrt(value);
}


double Calculator::lnValue()
{
    if (value <= 0) throw error;
    return log(value);
}


double Calculator::sinValue(bool isDeg)
{
    if (isDeg)
        return sin(value * M_PI/180); // вернуть значение в градусах
    else
        return sin(value);
}


double Calculator::cosValue(bool isDeg)
{
    if (isDeg)
        return cos(value * M_PI/180); // вернуть значение в градусах
    else
        return cos(value);
}


double Calculator::tgValue(bool isDeg)
{
    if (isDeg)
        return tan(value * M_PI/180); // вернуть значение в градусах
    else
        return tan(value);
}


double Calculator::sqrValue()
{
    return value *= value;
}


double Calculator::powValue(double power)
{
    return pow(value, power);
}
