#include <iostream>
#include "cins.h"
using namespace std;

int main() {

	Cins cs(40, 45);
	cs.print();

	cout << endl;
	cs.fits();
	cs.setDiametr(56);
	  
	cout << endl;
	cs.fits();
	cout << endl;

	cs.input();
	cs.fits();
}