#pragma once
#include "classShape.h"

const float PI = 3.1415926535;

// ����� ����������
class Circle: public Shape
{
	float r; // ������

public:

	Circle(); // �. �� ���������
	Circle(float r1); // �. � ����������
	~Circle();
	void set_r(float r1); // ������� �������
	float get_r() const; // ��������� �������
	float area() override;
	float perimeter() override;
	float diameter() const;// �������

};

