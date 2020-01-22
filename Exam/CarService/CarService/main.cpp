#include <iostream>
#include "Car.h"
#include "Cashbox.h"
#include "Mechanic.h"
#include "Car_Service.h"

using namespace std;

int main()
{
	setlocale(0, "");

	Car_Service shinarezina;
	Car c;
	Cashbox csh;
	Mechanic mech;
	double summa;

	cout << "Услуги автосервиса:" << endl;
	shinarezina.setServices("1) Диагностика автомобиля от 1000 RUB \n" 
							"2) Замена масла от 500 RUB \n" 
							"3) Ремонт двигателя от 10000 RUB");
	cout << shinarezina.getServices() << endl << endl;

	c.setMark("BMW");
	c.setType("Легковой автомобиль");
	c.setWorks(false);

	cout << "Информация об автомобиле:" << endl;
	cout << "> Марка: " << c.getMark() << endl;
	cout << "> Тип: " << c.getType() << endl;
	cout << "> Исправность: " << c.getWorks() << endl << endl;

	mech.setBusy(true);
	mech.doWork("1) Диагностика автомобиля \n2) Ремонт двигателя", c, csh);
	summa = 114100.99;
	cout << endl;

	cout << "ЧЕК:" << endl;
	csh.setPrice(summa);
	csh.printCheck();

	cout << endl << endl;

	// ПРИМЕР АЛГОРИТМА СТАНДАРТНОЙ БИБЛИОТЕКИ
	int a[3] = { 1, 2, 3 }, 
		b[3] = { 4, 5, 6 };

	for (unsigned i = 0; i < 3; i++)
		cout << a[i] << " ";

	cout << endl;

	for (unsigned i = 0; i < 3; i++)
		cout << b[i] << " ";
	cout << endl << endl;


	swap(a, b);


	for (unsigned i = 0; i < 3; i++)
		cout << a[i] << " ";

	cout << endl;

	for (unsigned i = 0; i < 3; i++)
		cout << b[i] << " ";

	cout << endl;

	// КОНЕЦ ПРИМЕРА

	system("pause");
	return 0;
}