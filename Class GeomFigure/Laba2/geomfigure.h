#ifndef GEOMFIGURE_H
#define GEOMFIGURE_H
#include <string>

using namespace std;

// Класс геометрической фигуры - правильный многоугольник
// Возможности класса: 1) вычисление периметра правильного многоугольника
//                     2) вычисление площади правильного многоугольника
//                     3) вычисление радиуса правильного многоугольника
//                        для использования в расчёте площади фигуры
class GeomFigure
{
private:
    float X;        // Координата Х центра правильного многоугольника
    float Y;        // Координата Y центра правильного многоугольника
    unsigned N;     // Количество вершин правильного многоугольника
    float A;        // Длина сторон правильного многоугольника
public:
    GeomFigure();                                                          // Кон-р зануляющий
    GeomFigure(float valueX, float valueY, unsigned valueN, float valueA); // Кон-р с параметрами
    float calcR() const;          // Расчёт радиуса вписанной окружности
    float calcS() const;          // Расчёт площади правильного многоугольника
    float calcP() const;          // Расчёт периметра правильного многоугольника
    bool operator == (const GeomFigure &GeomFigure1) const; // Сравнение фигур
    void setX(float valueX);        // Сеттер Х
    void setY(float valueY);        // Сеттер Y
    void setN(unsigned valueN);     // Сеттер N
    void setA(float valueA);        // Сеттер A
    float getX() const;                   // Геттер Х
    float getY() const;                   // Геттер Y
    unsigned getN() const;                // Геттер N
    float getA() const;                   // Геттер A
    string data2string() const;           // Возвращает строковое представление данных класса
};

#endif // GEOMFIGURE_H
