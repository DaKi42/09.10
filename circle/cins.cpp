#include "Cins.h"

Cins::Cins(int d, int l) : Circle(d), Square(l){}

void Cins::fits()
{
	if (Circle::getDiametr() <= Square::getLength()) {
		cout << "Circle succesfully fits into a square." << endl; 
	}
	else {
		cout << "The circle doesn't fit in the square." << endl;
	}
}

void Cins::print() const
{
	Circle::print();
	Square::print();
}

void Cins::input()
{
	Circle::input();
	Square::input();
}
