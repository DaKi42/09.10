#include "Circle.h"

Circle::Circle(int d) : diametr(d){}

void Circle::print() const
{
	cout << "Circle diametr: " << diametr << " cm" << endl;
}

void Circle::input()
{ 
	cout << "Enter circle diametr: "; 
	cin >> diametr;
}

int Circle::getDiametr() const
{
	return diametr;
}

void Circle::setDiametr(int d)
{
	if (d > 0) {
		diametr = d;
	}
} 
