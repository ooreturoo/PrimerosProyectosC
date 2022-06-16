
#include <iostream>
#include <string.h>
#include "Menu.h"


using namespace std;


const string TEXT_BIENVENIDA = "Bienvenido a la aplicacion de almacenamiento.";
const int TAMANIO = 10;
bool salidaAplicacion = false;



int main() {

	string peliculas[TAMANIO];
	int peliculasIntroducidas = 0;

	cout << TEXT_BIENVENIDA;

	while (!salidaAplicacion) {

		imprimirMenu();
		salidaAplicacion = accionesMenu(peliculas , TAMANIO, peliculasIntroducidas);

	}


}



