#include "Arco.h"
#include "Grafo.h"
#include "iostream"
#include <list>

using namespace std;

Grafo::Grafo(const int & vert){
	vertices= vert;
	matriz_grafo= new int *[vertices];
	
	for (int i=0; i<vertices; i++)
		matriz_grafo[i]= new int [vertices];
	
	// inicializa la matriz con 0
    for (int i=0; i<vertices; i++)
        for(int j=0; j<vertices; j++)
            matriz_grafo[i][j]= 0;
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

void Grafo::Agregar_arco(const int & origen, const int & destino, const int & costo){
	matriz_grafo[origen][destino]= costo;
	// si fuera no dirigido me parece que habria que poner el otro arco tambien
	// matriz_Grafo[destino][origen]= 1;
}

void Grafo::Eliminar_arco(const int & origen, const int & destino){
	matriz_grafo[origen][destino]= 0;
	// si fuera no dirigido me parece que habria que poner el otro arco tambien
	// matriz_Grafo[destino][origen]= 0;
}

int Grafo::Ver_costo_arco(const int & origen, const int & destino) const{
	return matriz_grafo[origen][destino];
}

void Grafo::Modificar_costo_arco(const int & origen, const int & destino, const int & costo){
	matriz_grafo[origen][destino]= costo;

}

bool Grafo::Existe_arco(const int origen, const int destino){
	if (matriz_grafo[origen][destino] == 0)
		return false;
	else
		return true; 
}


void Grafo::Agregar_vertice(){
	Grafo aux_matriz_grafo(vertices + 1);
	
	// copia la auxiliar con los valores anteriores
    for (int i=0; i<vertices; i++)
        for(int j=0; j<vertices; j++)
           	aux_matriz_grafo.Agregar_arco(i, j, matriz_grafo[i][j]);

	vertices++;

    // inicializa en 0 la ultima fila y columna

    for (int i=0; i<vertices; i++){
        aux_matriz_grafo.Agregar_arco(i, vertices-1, 0);
        aux_matriz_grafo.Agregar_arco(vertices-1, i, 0);
    }
    
    *this= aux_matriz_grafo;
    
}

void Grafo::Eliminar_vertice(int vert){
	Grafo aux_matriz_grafo(vertices - 1);
	
	// MAL este metodo cambia el identificador del vertice!!
	// habria que armar un arreglo que lleve los identificadores en enteros o string o algo

	// copia el auxiliar con los valores anteriores (4 submatrices)
	//		   ||    
	//		--------
	//		--------
	//		   ||

    for (int i=0; i<vert-1; i++)
        for(int j=0; j<vert-1; j++)
           	aux_matriz_grafo.Agregar_arco(i, j, matriz_grafo[i][j]);
    
    for (int i=vert+1; i<vertices; i++)
        for(int j=0; j<vert-1; j++)
           	aux_matriz_grafo.Agregar_arco(i-1, j, matriz_grafo[i][j]);
    
    for (int i=0; i<vert-1; i++)
        for(int j=vert+1; j<vertices; j++)
           	aux_matriz_grafo.Agregar_arco(i, j-1, matriz_grafo[i][j]);
    
    for (int i=vert+1; i<vertices; i++)
        for(int j=vert+1; j<vertices; j++)
           	aux_matriz_grafo.Agregar_arco(i-1, j-1, matriz_grafo[i][j]);

	vertices--;
    
    *this= aux_matriz_grafo;

}

void Grafo::Devolver_adyacentes(int vert, list<Arco> &lista_adyacentes){

	lista_adyacentes.clear();
	
	for (int j=0; j<vertices; j++)
		if (matriz_grafo[vert][j] != 0){
			Arco un_arco(vert, j, matriz_grafo[vert][j]);
			lista_adyacentes.push_front(un_arco);
		}
}

void Grafo::Devolver_entrantes(int vert, list<Arco> &lista_entrantes){

	lista_entrantes.clear();
	
	for (int i=0; i<vertices; i++)
		if (matriz_grafo[i][vert] != 0){
			Arco un_arco(i, vert, matriz_grafo[i][vert]);
			lista_entrantes.push_front(un_arco);
		}
}

