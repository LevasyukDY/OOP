#include <QCoreApplication>
#include <iostream>
#include "geomfigure.h"
#include "mymodule.h"
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Сравнение двух объектов класса GeomFigure
    try
    {
        GeomFigure figure1(1, 3, 6, 10);
        figureOutput(figure1, "Figure1");
        GeomFigure figure2(1, 3, 6, 10);
        figureOutput(figure2, "Figure2");
        if (figure1 == figure2)
            cout << "=> The figures are the same" << endl << endl;
        else
            cout << "=> The figures are different" << endl << endl;
    }
    catch (int e)
    {
        if (e == -1)
        {
            cout << "Error: Invalid input value N" << endl;
            GeomFigure figure1();
            GeomFigure figure2();
        }
        if (e == -2)
        {
            cout << "Error: Invalid input value A" << endl;
            GeomFigure figure1();
            GeomFigure figure2();
        }
    }


    // Создание массива из объектов с помощью vector
    unsigned n = 5;
    vector<GeomFigure> objectArray;

    for (unsigned i = 0; i < n; i++)
    {
        GeomFigure figure(rand() % 20 - 10 ,
                          rand() % 20 - 10 ,
                          rand() % 10 + 2  ,
                          rand() % 10 + 1  );
        figureOutput(figure, "ArrFigure" + to_string(i+1));
        objectArray.push_back(figure);
    }


    // Создание динамического массива
    GeomFigure* t = new GeomFigure[n];
    delete[] t;


    // Массив указателей на объекты класса
    vector<GeomFigure*> mass;
    for (unsigned i = 0; i < n; i++)
    {
        GeomFigure* p = new GeomFigure(rand() % 20 - 10 ,
                                       rand() % 20 - 10 ,
                                       rand() % 10 + 2  ,
                                       rand() % 10 + 1  );
        mass.push_back(p);
        cout << "Pointer" << i+1 << ":\n" << mass[i]->data2string();
    }

    //Очищение памяти
    for (unsigned i = 0; i < mass.size(); i++)
        delete mass[i];

    // Запись массива в файл
    string filename = "GeomFigure.txt";
    object2file(objectArray, filename);

    // Чтение массива из файла
    objectArray = readFile(filename);

    cout << "The figures from file:" << endl;
    for (unsigned i = 0; i < objectArray.size(); i++)
    {
        cout << "Figure" << i+1 << ":" << endl
             << " X = " << objectArray[i].getX() << endl
             << " Y = " << objectArray[i].getY() << endl
             << " N = " << objectArray[i].getN() << endl
             << " A = " << objectArray[i].getA() << endl << endl;
    }

    return a.exec();
}




