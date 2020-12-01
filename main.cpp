#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	Figura *puntFigura[2];
	int menu;
	float aux1 = 0;

	do
	{
		cout << "1. Ingresar cuadrado" << endl;
		cout << "2. Realizar perimetro del cuadrado" << endl;
		cout << "3. Realizar area del cuadrado" << endl;
		cout << "4. Ingresar circulo" << endl;
		cout << "5. Realizar perimetro del circulo" << endl;
		cout << "6. Realizar area del circulo" << endl;
		cout << "0. Salir" << endl;
		cout << endl;
		cout << "-> ";
		cin >> menu;
		cin.ignore();
		cout << endl;

		switch(menu)
		{
			case 1:

			cout << "Ingrese la medida de los lados en centimetros: ";
			cin >> aux1;
			cin.ignore();
			cout << endl;
			puntFigura[1] = new Cuadrado(aux1);


			break;
			case 2:

			puntFigura[1] -> perimetro();

			break;
			case 3:

			puntFigura[1] -> area();

			break;
			case 4:

			cout << "Ingrese el radio del circulo: ";
			cin >> aux1;
			cin.ignore();
			cout << endl;
			puntFigura[2] = new Circulo(aux1);

			break;
			case 5:

			puntFigura[2] -> perimetro();

			break;
			case 6:

			puntFigura[2] -> area();

			break;
			case 0:

			cout << "El programa se esta cerrando..." << endl;
			cin.get();
			delete [] *puntFigura;

			break;
			default:

			cout << "No se ingreso una opcion valida. Vuelva a intentar..." << endl;
			cout << endl;
		}
	}while(menu != 0);

	return 0;
}