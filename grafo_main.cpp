#include <iostream>
#include "Grafo.h"

using namespace std;


int main(){

	int vertices, origen, destino;

	cout << endl << "Ingrese la cantidad de vertices de su Grafo:" << endl;
	cin >> vertices;

	Grafo monigote(vertices);

	cout << endl << "Grafo con " << vertices << " vertices creado!" << endl << endl;

	return 0;
}
