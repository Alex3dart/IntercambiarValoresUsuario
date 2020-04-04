#include "IntercambiarValores.h"
#include <iostream>

IntercambiarValores::IntercambiarValores(int m_a,int m_b) // Constructor
{
	b = m_a; // El valor de b se cambia al valor del a que le hemos pasado desde main
	a = m_b; // El valor de a se cambia al valor del b que le hemos pasado desde main
}

void IntercambiarValores::changeNumbers() // Muestra los valores cambiados
{
	std::cout << "Los nuevos valores son: " << a << " y " << b << std::endl;
}