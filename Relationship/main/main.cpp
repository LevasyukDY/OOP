#include <iostream>
#include "Car.h"
#include "Car_Color.h"
#include "Engine.h"
#include "Human.h"
#include "Truck.h"

using namespace std;

int main()
{
	setlocale(0, "");

	Car c;
	Human h;
	c.setMileage(13412.12);
	c.setPrice(2300000);
	c.setRegNum("A240BC75RU");
	c.setSpeed(146);
	c.setWeight(3400);
	c.setYear(2018);
	c.setMark("Fiat");
	c.myDriver = &h;
	h.myCar = &c;

	Truck t;
	t.setBodyType("Фургон");

	Car_Color cc;
	c.color = &cc;
	c.color->setColor("Белый");

	Engine e;
	e.setPower(130);
	e.setVolume(2.3);
	c.engine = e;

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
		"  Марка: " << c.getMark() << endl <<
		">Цвет: " << cc.getColor() << endl <<
		">Двигатель: " << endl <<
		"  Мощность: " << c.engine.getPower() << " л.с." << endl <<
		"  Объём: " << c.engine.getVolume() << " л." << endl <<
		">Тип кузова: "<< t.getBodyType() << endl << endl;

	cout << c.Info() << endl << endl;
	cout << t.Info() << endl << endl;

	system("pause");
	return 0;
}