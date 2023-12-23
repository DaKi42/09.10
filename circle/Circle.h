#pragma once
#include <iostream>
using namespace std;

class Circle
{
	int diametr;
public:
	Circle() = default;
	Circle(int d);
	void print() const;
	void input(); 

	int getDiametr() const;
	void setDiametr(int d);
};
 
