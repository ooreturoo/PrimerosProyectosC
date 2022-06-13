
#include <iostream>
#include "accionesAplicacion.h"

using namespace std;

void menu() {

	cout << "Introduce la accion a realizar." << endl;
	cout << "1. Almacenar pelicula." << endl;
	cout << "2. Mostrar todas las peliculas." << endl;
	cout << "3. Mostrar pelicula aleatoria." << endl;
	cout << "4. Salir." << endl;

}

bool accionesMenu(string titulos[]) {

	int numeroIntroducido;

	cin >> numeroIntroducido;

	switch (numeroIntroducido)
	{
	case 1:
		almacenarPelicula(string titulos[]);
		break;

	}


}