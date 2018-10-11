#include <iostream>
#include <windows.h>
#include<conio.h>
#include "Modelo.h"
using namespace std;

int main(int argc, char** argv) {
	Suma<float> obj(200, 999.99);
	Suma<int> obj1(9, 6);
	Suma<double> obj2(2.89779879, 3.28931746);
	return 0;
}
