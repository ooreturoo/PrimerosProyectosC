

#include "Menu.h"
#include <iostream>


using namespace std;

void imprimirMenu() {

	cout << "Introduce la accion a realizar." << endl;
	cout << "1. Almacenar pelicula." << endl;
	cout << "2. Mostrar todas las peliculas." << endl;
	cout << "3. Mostrar pelicula aleatoria." << endl;
	cout << "4. Salir." << endl;

}

bool accionesMenu(string titulos[],int tamanio, int &peliculasIntroducidas) {

	int numeroIntroducido;

	cin >> numeroIntroducido;

	switch (numeroIntroducido){

	case 1:

		almacenarPelicula(titulos,tamanio,peliculasIntroducidas);
		break;

	case 2:

		mostrarPeliculas(titulos, tamanio);
		break;
	
	}

	return true;

}