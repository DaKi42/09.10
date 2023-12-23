#include "Square.h"

Square::Square(int l) : length(l){}

void Square::print() const
{
	cout << "Square: " << length << " cm" << endl;
}

void Square::input()
{
	cout << "Enter square length: ";  
	cin >> length;
}

int Square::getLength() const
{
	return length;
}

void Square::setLength(int l)
{
	if (l > 0) {
		length = l;
	}
}
