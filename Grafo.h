#ifndef GRAFO_H
#define GRAFO_H


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

		//int *Arcos_salientes(int vertice) const;
		int *Arcos_entrantes(int vertice) const; 

	private:
		// la estructura a utilizar va a ser una madriz de tamaño vertice x vertice
		int vertices, origen, destino, costo;
		int *auxiliar_arcos;
		int **matriz_grafo;

};

#endif
