#ifndef MYMODULE_H
#define MYMODULE_H
#include "geomfigure.h"
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

void object2file(vector<GeomFigure> &objectArray, string filename); // Запись массива в файл
vector<GeomFigure> readFile(string filename);                       // Чтение массива из файла
unsigned numberOfLines(string filename);                        // Функция подсчета строк в файле
void figureOutput(const GeomFigure &GeomFigure1, string name);  // Вывод данных о фигуре на консоль


#endif // MYMODULE_H
