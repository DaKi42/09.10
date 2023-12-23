#pragma once
#include "Circle.h"
#include "Square.h"
#include <iostream>
using namespace std;

class Cins : public Square, public Circle
{
public: 
	Cins() = default;
	Cins(int d, int l);
	void fits();
	void print() const;
	void input();
}; 

