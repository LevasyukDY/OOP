#include <iostream>
#include "Car.h"
#include "Car_Color.h"
#include "Engine.h"
#include "Human.h"
#include "Sedan.h"

using namespace std;

int main()
{
	setlocale(0, "");

	Car c;
	c.setMileage(13412.12);
	c.setPrice(2300000);
	c.setRegNum("A240BC75RU");
	c.setSpeed(240);
	c.setWeight(3000);
	c.setYear(2018);

	Sedan s;
	s.setMark("BMW");

	Car_Color cc;
	cc.setColor("Жёлтый");

	Engine e;
	e.setPower(300);
	e.setVolume(2.5);

	Human h;
	h.setDriverLicense(true);
	h.setFullName("Левасюк Денис Юрьевич");

	cout << ">ФИО: " << h.getFullName() << endl <<
		">Водительские права: " << h.getDriverLicense() << endl <<
		">Автомобиль: " << endl << "  Пробег: " << c.getMileage() << " км." <<
		endl << "  Цена: " << c.getPrice() << " руб." << endl <<
		"  Регистрационный номер: " << c.getRegNum() << endl <<
		"  Макс. скорость: " << c.getSpeed() << " км/ч" << endl <<
		"  Вес: " << c.getWeight() << " кг." << endl <<
		"  Год выпуска: " << c.getYear() << endl <<
		">Марка: " << s.getMark() << endl <<
		">Цвет: " << cc.getColor() << endl <<
		">Двигатель: " << endl <<
		"  Мощность: " << e.getPower() << " л.с." << endl <<
		"  Объём: " << e.getVolume() << " л." << endl << endl;

	cout << c.Info() << endl << endl;
	cout << s.Info() << endl << endl;

	system("pause");
	return 0;
}