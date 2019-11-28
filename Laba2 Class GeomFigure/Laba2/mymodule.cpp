#include "mymodule.h"
#include "geomfigure.h"
#include <string.h>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


// Вывод данных о фигуре на консоль
void figureOutput(const GeomFigure &GeomFigure1, string figureName)
{
    cout << figureName << ":" << endl;
    cout << " P = " << GeomFigure1.calcP() << endl;
    cout << " S = " << GeomFigure1.calcS() << endl;
    cout << " R = " << GeomFigure1.calcR() << endl;
    cout << " X = " << GeomFigure1.getX() << endl;
    cout << " Y = " << GeomFigure1.getY() << endl;
    cout << " N = " << GeomFigure1.getN() << endl;
    cout << " A = " << GeomFigure1.getA() << endl << endl;
}


// Запись массива в файл
void object2file(vector<GeomFigure> &objectArray, string filename)
{
    ofstream out(filename);
    for (unsigned i = 0; i < objectArray.size(); i++)
    {
        out << objectArray[i].getX() << " ";
        out << objectArray[i].getY() << " ";
        out << objectArray[i].getN() << " ";
        out << objectArray[i].getA() << endl;
    }
    out.close();
}


// Чтение массива из файла
vector<GeomFigure> readFile(string filename)
{
    float valueX;
    float valueY;
    unsigned valueN, sum;
    float valueA;

    sum = numberOfLines(filename);
    vector <GeomFigure> v;

    ifstream in(filename);
    for (unsigned i = 1; i <= sum-1; i++)
    {
        in >> valueX >> valueY >> valueN >> valueA;
        GeomFigure a(valueX, valueY, valueN, valueA);
        v.push_back(a);
    }

    in.close();
    return v;
}

// Функция подсчета строк в файле
unsigned numberOfLines(string filename)
{
    unsigned sum = 0;
    string line;
    ifstream f(filename);
    while (!f.eof()) {
        getline(f, line);
        sum++;
    }
    return sum;
}


