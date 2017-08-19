#ifndef GRAFO_H
#define GRAFO_H


class Grafo{
	
	public:
		Grafo(const int & vertices);
		virtual ~Grafo();
		void Destruir();
		int Cantidad_vertices()const;
		void Agregar_arco(const int & origen, const int & destino);
		//int *Arcos_salientes(int vertice) const;
		//int *Arcos_entrantes(int vertice) const; 


	private:
		// la estructura a utilizar va a ser una madriz de tamaño vertice x vertice
		int vertices, origen, destino;
		int *auxiliar_arcos;
		int **matriz_grafo;

};

#endif
