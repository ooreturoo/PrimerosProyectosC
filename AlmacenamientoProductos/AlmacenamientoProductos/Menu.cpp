

#include "Menu.h"
#include <iostream>


using namespace std;

void imprimirMenu() {

	cout << endl << "Introduce la accion a realizar." << endl;
	cout << "1. Almacenar pelicula." << endl;
	cout << "2. Mostrar todas las peliculas." << endl;
	cout << "3. Mostrar pelicula aleatoria." << endl;
	cout << "4. Eliminar Pelicula." << endl;
	cout << "5. Salir" << endl << endl;

}

bool accionesMenu(string titulos[],int tamanio, int& peliculasIntroducidas) {

	bool salida = false;

	int numeroIntroducido;

	cin >> numeroIntroducido;

	system("cls");

	switch (numeroIntroducido){

	case 1:

		almacenarPelicula(titulos,tamanio,peliculasIntroducidas);
		break;

	case 2:

		mostrarPeliculas(titulos, peliculasIntroducidas);
		break;
	
	case 3:

		mostrarPeliculaAleatoria(titulos, peliculasIntroducidas);
		break;
	
	case 4:

		eliminarPelicula(titulos, peliculasIntroducidas);
		break;

	case 5:

		salida = true;
		break;

	}

	return salida;

}