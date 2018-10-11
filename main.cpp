#include <iostream>
#include <windows.h>
#include<conio.h>
#include "Modelo.h"
using namespace std;

int main(int argc, char** argv) {
	Suma<float> obj(200, 999.99);
	Suma<int> obj1(9, 6);
	Suma<double> obj2(2.89779879, 3.28931746);
	cout<<"La suma entre dos numeros flotantes es: "<<obj.sumaNumeros()<<" la resta es: "<<obj.restaNumeros()<<" la division: "<<obj.divisionNumeros()<<" la multiplicacion: "<<obj.multiplicacionNumeros()<<" y la potenciacion: "<<obj.potenciaNumeros()<<endl;
	cout<<"La suma entre dos numeros enteros es: "<<obj1.sumaNumeros()<<" la resta es: "<<obj1.restaNumeros()<<" la division: "<<obj1.divisionNumeros()<<" la multiplicacion: "<<obj1.multiplicacionNumeros()<<" y la potenciacion: "<<obj1.potenciaNumeros()<<endl;
	cout<<"La suma entre dos numeros doubles es: "<<obj2.sumaNumeros()<<" la resta es: "<<obj2.restaNumeros()<<" la division: "<<obj2.divisionNumeros()<<"la multiplicacion: "<<obj2.multiplicacionNumeros()<< "y la potenciacion: " <<obj2.potenciaNumeros()<<endl;
	return 0;
}
