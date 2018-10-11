#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
template <class T>
class Suma {
private:
	T n1;
	T n2;
public:
	Suma(T, T);
	T sumaNumeros();
	T restaNumeros();
	T divisionNumeros();
	T getN1() { return n1; }
	T getN2() { return n2; }
	void setN1(T _n1) { n1 = _n1; }
	void setN2(T _n2) { n2 = _n2; }
};

template <class T>
Suma<T>::Suma(T _t1, T _t2)
{
	n1 = _t1;
	n2 = _t2;
}
template <class T>
T Suma<T>::sumaNumeros() {
	return n1 + n2;
}

template <class T>
	T Suma<T>::restaNumeros(){
		return n1-n2;
	}

template <class T>
	T Suma<T>::divisionNumeros(){
		if (n2==0){
			return n2/n1;
		}
		else
		{
			return n1/n2;
		}	
	}	
