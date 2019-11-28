#include "geomfigure.h"
#include <math.h>
#include <iostream>

using namespace std;

// Конструктор
GeomFigure::GeomFigure()
{
    X = 0;
    Y = 0;
    N = 3;
    A = 1;
}


// Конструктор с параметрами
GeomFigure::GeomFigure(float valueX, float valueY, unsigned valueN, float valueA)
{
    X = valueX;
    Y = valueY;

    if (valueN > 2 && valueN < 1000)
        N = valueN;
    else
        throw -1;

    if (valueA > 0)
        A = valueA;
    else
        throw -2;
}


// Расчёт радиуса
float GeomFigure::calcR() const
{
    float R =                      A
          / /// --------------------------------------------
                (2 * tan((360 * 3.14159265 / 180)/(2 * N)));
    return R;
}


// Расчёт площади
float GeomFigure::calcS() const
{
    float S = calcR() * (calcP() / 2);
    return S;
}


// Расчёт периметра
float GeomFigure::calcP() const
{
    float P = A * N;
    return P;
}


// Сеттер Х
void GeomFigure::setX(float valueX)
{
    X = valueX;
}


// Сеттер Y
void GeomFigure::setY(float valueY)
{
    Y = valueY;
}


// Сеттер N
void GeomFigure::setN(unsigned valueN)
{
    N = valueN;
}


// Сеттер А
void GeomFigure::setA(float valueA)
{
    A = valueA;
}


// Сравнение фигур
bool GeomFigure::operator == (const GeomFigure &GeomFigure1) const
{
    if (GeomFigure1.X != X)
        return false;
    if (GeomFigure1.Y != Y)
        return false;
    if (GeomFigure1.N != N)
        return false;
    if (GeomFigure1.A != A)
        return false;
    return true;
}


// Геттер Х
float GeomFigure::getX() const
{
    return X;
}


// Геттер Y
float GeomFigure::getY() const
{
    return Y;
}


// Геттер N
unsigned GeomFigure::getN() const
{
    return N;
}


// Геттер A
float GeomFigure::getA() const
{
    return A;
}

// Возвращает строковое представление данных класса
string GeomFigure::data2string() const
{
    string str;
    str  = " X = " + to_string(this->getX()) + "\n"
         + " Y = " + to_string(this->getY()) + "\n"
         + " N = " + to_string(this->getN()) + "\n"
         + " A = " + to_string(this->getA()) + "\n\n";
    return str;
}
















