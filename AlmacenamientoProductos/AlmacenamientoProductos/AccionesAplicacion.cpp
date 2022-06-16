
#include "AccionesAplicacion.h"
#include <iostream>


using namespace std;


void almacenarPelicula(string peliculas[], int tamanio, int& peliculasIntroducidas) {

	//if (peliculasIntroducidas == tamanio) {

	//	
	//}

	cout << "Introduce el titulo de la pelicula." << endl;

	cin.ignore(true);

	getline(cin, peliculas[peliculasIntroducidas]);

	peliculasIntroducidas++;

}

void mostrarPeliculas(string peliculas[], int tamanio) {

	for (int i = 0; i < tamanio; i++) {

		if (peliculas[i] == "\0") {

		cout << peliculas[i];

		}

	}

}