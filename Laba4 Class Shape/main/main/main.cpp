#include <iostream>
#include "classShape.h"
#include "classSquare.h"
#include "classCircle.h"
#include "classTriangle.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");

	Square a(5);
	a.set_side(4); // сторона квадрата = 4
	float S = a.area(); // Площадь квадрата
	cout << "Площадь квадрата S = " << S << endl;
	float P = a.perimeter(); // Периметр квадрата
	cout << "Периметр квадрата P = " << P << endl;

	Circle b;
	b.set_r(3.2); // r = 3.2
	S = b.area(); // Площадь окружности
	cout << "Площадь окружности S = " << S << endl;
	float L = b.perimeter(); // Длина окружности
	cout << "Длина окружности L = " << L << endl;
	float D = b.diameter(); // Диаметр окружности
	cout << "Диаметр окружности D = " << D << endl;

	try {
		Triangle c(3, 4, 5);
		//c.set_sides(2, 3, 5);
		cout << "Стороны треугольника: " << c.get_a() << " "
			<< c.get_b() << " " << c.get_c() << endl;
		S = c.area();
		cout << "Площадь треугольника S = " << S << endl;
	} catch (short e) {
		if (e == Triangle::NotTriangle)
			cout << "Треугольник не существует!" << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}
