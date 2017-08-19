#include "Grafo.h"
#include "iostream"

Grafo::Grafo(const int & vertices){
	matriz_grafo= new int *[vertices];
	for (int i=0; i<vertices; i++) {
		matriz_grafo[i]= new int [vertices];
	}
}

Grafo::~Grafo()	{
	    //dtor
	}


void Grafo::Destruir(){
	//destruye lo que ya está 
    for (int i=0; i<vertices; i++)
        delete [] matriz_grafo[i];
    delete [] matriz_grafo;
}


int Grafo::Cantidad_vertices() const{
	return vertices;
}

void Grafo::Agregar_arco(const int & origen, const int & destino){
	matriz_grafo[origen][destino]= 1;
	// si fuera no dirigido me parece que habria que poner el otro arco tambien
	// matriz_Grafo[destino][origen]= 1;
}

/*
int *Grafo::Arcos_salientes(int vertice) const{
	int auxiliar_arcos= [vertices];

	// salientes son las filas de la matriz
	auxiliar_arcos= matriz_grafo[vertice][0];

	return &auxiliar_arcos;
}

int *Grafo::Arcos_entrantes(int vertice) const{
	auxiliar_arcos= new int *[vertices];
	//entrantes son las columnas de la matriz

	for (int i=0; i<vertices; i++){
		auxiliar_arcos[i]= matriz_grafo[0][vertice];
	}
	return &auxiliar_arcos;
}
*/