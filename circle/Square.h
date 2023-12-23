#pragma once
#include <iostream>
using namespace std;

class Square
{
	int length;
public:
	Square() = default;
	Square(int l);
	void print() const;
	void input();

	int getLength() const;
	void setLength(int l); 
};

 