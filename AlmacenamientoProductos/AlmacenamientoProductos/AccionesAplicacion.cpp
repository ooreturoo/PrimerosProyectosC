
#include "AccionesAplicacion.h"
#include <iostream>


using namespace std;


void almacenarPelicula(string peliculas[], int tamanio, int& peliculasIntroducidas) {

	if (peliculasIntroducidas == tamanio) {

		//Lanzar Excepcion.
		throw exception("Almacenamiento completo.");

	}

	string nombrePelicula;

	cout << "Introduce el titulo de la pelicula." << endl;

	cin.ignore(true);

	getline(cin, nombrePelicula);


	peliculas[peliculasIntroducidas] = nombrePelicula;

	peliculasIntroducidas++;

}

void mostrarPeliculas(string peliculas[], int& peliculasIntroducidas) {

	if (peliculasIntroducidas == 0) {

		//Lanzar Excepcion
		throw exception("Almacenamiento vacio.");

	}

	for (int i = 0; i < peliculasIntroducidas; i++) {

		cout << peliculas[i] << endl;

	}

}

void mostrarPeliculaAleatoria(std::string peliculas[], int& peliculasIntroducidas) {

	if (peliculasIntroducidas == 0) {

		//Lanzar Excepcion
		throw exception("Almacenamiento vacio.");

	}

	int num = rand()%peliculasIntroducidas;


	cout << "Pelicula aleatorioa numero(" << num << "): " << peliculas[num];

}


void eliminarPelicula(std::string peliculas[], int& peliculasIntroducidas) {

	if (peliculasIntroducidas == 0) {

		//Lanzar Excepcion.
		throw exception("Almacenamiento vacio.");


	}

	string nombrePelicula;
	bool peliculaEliminada = false;

	cout << "Introduce el nombre de la pelicula que quieres eliminar." << endl;

	cin.ignore(true);

	getline(cin, nombrePelicula);

	for (int i = 0; i < peliculasIntroducidas && !peliculaEliminada; i++) {

		if (peliculas[i]._Equal(nombrePelicula)) {

			contraerArray(peliculas, i, peliculasIntroducidas);

			peliculasIntroducidas--;

			peliculaEliminada = true;

		}

	}

}


void contraerArray(std::string peliculas[], int i, int& peliculasIntroducidas) {

	for (; i < peliculasIntroducidas - 1; i++) {

		peliculas[i] = peliculas[i + 1];

	}

}
