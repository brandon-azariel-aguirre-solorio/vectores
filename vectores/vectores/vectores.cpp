#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include<stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
	int numero[5];//aray o vectores de 5 numeros
	int suma;// un entero que guarda la sume

	numero[0] = 200;
	numero[1] = 150;
	numero[2] = 100;
	numero[3] = -50;
	numero[4] = 300;
	suma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4];
	cout << "La suma es: " << suma;
	return 0;
	
}

