# Class CAR

**Class CAR** - класс, представляющий данные о машинах (например: цену, пробег, максимальную скорость и т.д.), 
и включающий виртуальный метод, который возвращает общую информацию об автомобиле.
Класс CAR является базовым по отношению к классу SEDAN, также он связан с классом CAR COLOR отношением агрегация, 
а с классом ENGINE композицией. Кроме того есть класс HUMAN, с которым класс CAR связан ассоциацией.

### UML-диаграмма:

![UML-диаграмма](https://sun9-63.userapi.com/c855228/v855228020/1a023a/x-LdHCka8p0.jpg)

### protected:

Название переменной  | Описание
------------- | -------------
`float weight;` | Вес автомобиля
`float mileage;` | Пробег автомобиля
`float speed;` | Максимальная скорость автомобиля
`long int price;` | Цена автомобиля
`int year;` | Год автомобиля
`string regNum;` | Регистрационный номер автомобиля
`string mark;` | Марка автомобиля

### public:

Заголовок Функции  | Описание
------------- | -------------
`Human* myDriver;` | указатель на объект класса HUMAN, необходимый для реализации отношения ассоциация
`Car();` | конструктор по-умолчанию
`~Car();` | деструктор
`void setWeight(float weight1);` | устанавливает вес автомобиля
`void setMileage(float mileage1);` | устанавливает пробег автомобиля
`void setSpeed(float speed1);` | устанавливает максимальную скорость автомобиля
`void setPrice(long int price1);` | устанавливает цену автомобиля
`void setYear(int year1);` | устанавливает год выпуска автомобиля
`void setRegNum(const string& regNum1);` | устанавливает регистрационный номер автомобиля
`void setMark(const string &mark1);` | устанавливает марку автомобиля
`string getMark() const;` | возвращает марку автомобиля
`float getWeight() const;` | возвращает вес автомобиля
`float getMileage() const;` | возвращает пробег автомобиля
`float getSpeed() const;` | возвращает максимальную скорость автомобиля
`long int getPrice() const;` | возвращает цену автомобиля
`int getYear() const;` | возвращает год выпуска автомобиля
`string getRegNum() const;` | возвращает регистрационный номер автомобиля
`string virtual Info();` | возвращает общую информацию об автомобиле, необходим для реализации отношения наследование

## Class HUMAN

**Class HUMAN** - класс, представляющий необходимую нам часть данных о человеке, такую как: ФИО человека 
и наличие водительских прав. Соединён с классом CAR отношением ассоциация.

### private:
Название переменной  | Описание
------------- | -------------
`string fullName;` | ФИО человека
`bool driverLicense;` | Наличие водительских прав

### public:
Заголовок Функции  | Описание
------------- | -------------
`void setDriverLicense(bool isLicense);` | устанавливает наличие водительских прав у человека
`bool getDriverLicense() const;` | возвращает наличие водительских прав у человека
`void setFullName(const string& fullName1);` | устанавливает ФИО человека
`string getFullName() const;` | возвращает ФИО человека
`Car* myCar;` | указатель на объект класса CAR, необходимый для реализации отношения ассоциация

## Class ENGINE

**Class ENGINE** - класс, представляющий необходимую нам часть данных о двигателе автомобиля, такую как: объём и мощность. 
Соединён с классом CAR отношением композиция.

### private:
Название переменной  | Описание
------------- | -------------
`float volume;` | Объём двигателя
`int power;` | Мощность двигателя

### public:
Заголовок Функции  | Описание
------------- | -------------
`void setVolume(float volume1);` | устанавливает объём двигателя
`void setPower(int power1);` | устанавливает мощность двигателя
`float getVolume() const;` | возвращает объём двигателя
`int getPower() const;` | возвращает мощность двигателя


## Class TRUCK

**Class TRUCK** - класс, представляющий необходимую нам часть данных о грузовом автомобиле, такую как - тип кузова. 
Соединён с классом CAR отношением наследование.

### private:
Название переменной  | Описание
------------- | -------------
`string bodyType;` | Тип кузова

### public:
Заголовок Функции  | Описание
------------- | -------------
`void setBodyType(const string &type);` | устанавливает тип кузова
`string getBodyType() const;` | возвращает тип кузова
`string Info() override;` | возвращает общую информацию о грузовом автомобиле, необходим для реализации отношения наследование


## Class CAR COLOR

**Class CAR COLOR** - класс, представляющий информацию о цвете автомобиля. 
Соединён с классом CAR отношением агрегация.

### private:
Название переменной  | Описание
------------- | -------------
`string color;` | Цвет автомобиля

### public:
Заголовок Функции  | Описание
------------- | -------------
`void setColor(const string &color1);` | устанавливает цвет автомобиля
`string getColor() const;` | возвращает цвет автомобиля


## Пример работы с классом
  
	Car c;
	c.setMileage(13412.12);
	c.setPrice(2300000);
	c.setRegNum("A240BC75RU");
	c.setSpeed(146);
	c.setWeight(3400);
	c.setYear(2018);
	c.setMark("Fiat");
	c.myDriver = new Human();
	// c.myDriver->getDriverLicense();

	Truck t;
	t.setBodyType("Фургон");

	Car_Color cc;
	cc.setColor("Белый");

	Engine e;
	e.setPower(130);
	e.setVolume(2.3);

	Human h;
	h.setDriverLicense(true);
	h.setFullName("Левасюк Денис Юрьевич");
	h.myCar = new Car();
	// h.myCar->getMark();

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
		"  Мощность: " << e.getPower() << " л.с." << endl <<
		"  Объём: " << e.getVolume() << " л." << endl <<
		">Тип кузова: "<< t.getBodyType() << endl << endl;

	cout << c.Info() << endl << endl;
	cout << t.Info() << endl << endl;

**При выполнении данного кода в функции main, в консоль будет выведено:**

![Вывод в консоль](https://sun9-14.userapi.com/c857724/v857724922/12a567/sLrhRycGQv8.jpg)

