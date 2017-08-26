#ifndef GRAFO_H
#define GRAFO_H
#include <list>
#include "Arco.h"

using namespace std;

class Grafo{
	
	public:
		Grafo(const int & vertices);
		virtual ~Grafo();
		void Destruir();
		int Cantidad_vertices()const;
		void Agregar_arco(const int & origen, const int & destino, const int & costo);
		void Eliminar_arco(const int & origen, const int & destino);
		int Ver_costo_arco(const int & origen, const int & destino)const;
		void Modificar_costo_arco(const int & origen, const int & destino, const int & costo);
		bool Existe_arco(const int origen, const int destino);

		void Agregar_vertice();
		void Eliminar_vertice(int vert);

		void Devolver_adyacentes(int vert, list<Arco> &lista_adyacentes);
		void Devolver_entrantes(int vert, list<Arco> &lista_entrantes);

	private:
		// la estructura a utilizar va a ser una madriz de tamaño vertice x vertice
		int vertices, origen, destino, costo;
		int **matriz_grafo;

};

#endif
