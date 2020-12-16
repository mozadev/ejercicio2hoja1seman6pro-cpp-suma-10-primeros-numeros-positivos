/*
1. Escriba un programa en C++ que determina la suma de los 10 primeros números
positivos.
Ejemplo:
La suma de los 10 primeros números positivos es 55
*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int asignanum()

{
	int num = 10;
	return num;
}


int calculasuma(int num)


{
	int suma = 0;
	for (int i = 1; i <= num; i++)
	suma = suma + i;
	return suma;

}

int main()


{
	int n = asignanum();
	cout << "el resultado es de" << n
		<< "l asuma primeros numeros es: " << calculasuma(n);
	_getch();


}
