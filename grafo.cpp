#include "grafo.h"
#include "iostream"
using namespace std

grafo::Grafo(int vertices){
	matriz_grafo= new int *[vertices];
	for int i=0, i<vertices, i++ {
		matriz_grafo[i]= new int[vertices];
	}
}

void grafo::Destruir(){
	//destruye lo que ya está 
    for (int i=0; i<vertices; i++)
        delete [] matriz_grafo[i];
    delete [] matriz_grafo;
}


int grafo::Cantidad_vertices(){
	return vertices;
}

void grafo::Agregar_arco(int origen, int destino){
	matriz_grafo[origen][destino]= 1;
	// si fuera no dirigido me parece que habria que poner el otro arco tambien
	// matriz_grafo[destino][origen]= 1;
}
