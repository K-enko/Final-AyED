#include <iostream>
using namespace std;

#include "header.h"

Figura::Figura()
{}

Figura::~Figura()
{}

Circulo::Circulo(float aux)
{
	x = aux;
}

void Circulo::perimetro()
{
	cout << "El perimetro es: " << (2 * 3.14 * x) << endl;
}

void Circulo::area()
{
	cout << "EL area es: " << (3.14 * x) << endl;
}

Cuadrado::Cuadrado(float aux)
{
	x = aux;
}

Cuadrado::~Cuadrado()
{}

void Cuadrado::perimetro()
{
	cout << "El perimetro es: " << (4 * x) << endl;
}

void Cuadrado::area()
{
	cout << "El area es: " << (x * x) << endl;
}