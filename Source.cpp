#include <iostream>
#include "IntercambiarValores.h"

int main()
{

	int a, b;

	std::cout << "Introduzca un numero: " << std::endl;
	std::cin >> a;

	std::cout << "Introduzca un segundo numero: " << std::endl;
	std::cin >> b;

	std::cout << "Los valores son: " << a << " y " << b << std::endl;

	IntercambiarValores intercambio(a, b);

	intercambio.changeNumbers();

	system("pause");

	return 0;

}