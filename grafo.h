#ifndef GRAFO_H
#define GRAFO_H


class grafo
{
public:
	Grafo(const int vertices);
	~Grafo();
	void Destruir();
	int Cantidad_vertices()const;
	void Agregar_arco(int origen, int destino);


private:
	// la estructura a utilizar va a ser una madriz de tamaño vertice x vertice
	int vertices, origen, destino;
	int **matriz_grafo;

};

#endif
