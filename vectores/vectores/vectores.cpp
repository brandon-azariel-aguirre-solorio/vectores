#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numero[5];//aray o vectores de 5 numeros
	int suma;// un entero que guarda la sume
	suma = 0;
	for (int i = 0; i <= 5; i++)
	{
		cout << "introduce un numero ";
		cin >> numero[i];
		suma = +numero[i];

	}
	cout << "La suma es: " << suma;
	return 0;
}

