#include <iostream>
#include "Grafo.h"

using namespace std;


void imprimir_matriz(Grafo un_grafo, int vertices){
	int fil= vertices;
	int col= vertices;

	for (int i= 0; i < fil; i++){
		cout << "|";
		for (int j = 0; j < col; j++){
			int num= un_grafo.Ver_costo_arco(i, j);

		if (num >= 0){
			if (num < 10){
				cout << "  " << un_grafo.Ver_costo_arco(i, j) << "|";
			}else{
				if (num < 100){
					cout << " " << un_grafo.Ver_costo_arco(i, j) << "|";
				}else{
					cout << un_grafo.Ver_costo_arco(i, j) << "|";
				}
			}
		}else{
			if (num > -10){
				cout << " " << un_grafo.Ver_costo_arco(i, j) << "|";
				}else{
					if (num > -100){
						cout << "  " << un_grafo.Ver_costo_arco(i, j) << "|";
					}else{
						cout << un_grafo.Ver_costo_arco(i, j) << "|";
					}
				}
			}
		}
		cout << endl;
	}
	cout << endl;

}

int main(){

	int vertices, origen, destino, costo, opcion, vert;
	cout << endl << "Ingrese la cantidad de vertices de su Grafo:" << endl;
	cin >> vertices;

	Grafo pelele(vertices);
	cout << endl << "Grafo con " << pelele.Cantidad_vertices() << " vertices creado!" << endl << endl;
	
	cout << "****************************************" << endl;
	cout << endl << "que desea hacer?" << endl << endl;
    cout << "1- Agregar un Arco" << endl;
    cout << "2- Eliminar un Arco" << endl;
    cout << "3- Ver el Costo de un Arco" << endl;
    cout << "4- Existe Arco?" << endl;
    cout << "5- Modificar el Costo de un Arco?" << endl;
    cout << endl;
    cout << "6- Agregar Vertice" << endl;
    cout << "7- Eliminar Vertice" << endl;
    cout << "8- ver Cantidad de Vertices" << endl;
    cout << "9- ver Matriz de Adyacencia" << endl;
    cout << endl;
    cout << "0- Salir" << endl;
	cout << "****************************************" << endl;
    cin >> opcion;
    while (opcion != 0){
    	switch (opcion){
    		case 1:{
				cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				cout << "Ingrese Costo del arco: ";
				cin >> costo;
				pelele.Agregar_arco(origen, destino, costo);
				cout << endl << "Se agregó el arco (" << origen << ", " << destino << ", " << costo << ")" << endl;
    		}
	            break;
    		case 2:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				pelele.Eliminar_arco(origen, destino);
				cout << endl <<  "Se Eliminó el arco (" << origen << ", " << destino << ")" << endl;	
    		}
	            break;
    		case 3:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				cout <<  endl << "el costo del arco (" << origen << ", " << destino << ") es " << pelele.Ver_costo_arco(origen, destino) << endl;
    		}
	            break;
    		case 4:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
    			if (pelele.Existe_arco(origen, destino))
    				cout << endl <<  "(" << origen << ", " << destino << ") Existe";
    			else
    				cout << endl <<  "(" << origen << ", " << destino << ") NO Existe";

    		}
	            break;
    		case 5:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				cout << "Ingrese el Nuevo Costo del arco: ";
				cin >> costo;
				pelele.Modificar_costo_arco(origen, destino, costo);
				cout <<  endl << "el costo del arco (" << origen << ", " << destino << ") es " << pelele.Ver_costo_arco(origen, destino) << endl;
    		}
    		case 6:{
    			pelele.Agregar_vertice();
    			cout << endl <<  "Vertice Agregado! " << endl;
    			cout << "Cantidad de vertices: " << pelele.Cantidad_vertices() << endl;
    		}
	            break;
    		case 7:{
    			cout << "Ingrese el N° de Vertice a Eliminar: ";
    			cin >> vert;
    			pelele.Eliminar_vertice(vert);
    			cout << endl << "Vertice Eliminado! " << endl;
    			cout << "Cantidad de vertices: " << pelele.Cantidad_vertices() << endl;
    		}
	            break;
    		case 8:{
    			cout << endl <<  "Cantidad de vertices: " << pelele.Cantidad_vertices() << endl;
    		}
	            break;
    		case 9:{
				imprimir_matriz(pelele, vertices);
			}
	            break;
    		default:{
                cout <<  endl << "Opción invalida\n" << "Ingrese una nueva opción\n";
            }
            break;

		}

	cout << "****************************************" << endl;
	cout << endl << "que desea hacer?" << endl << endl;
    cout << "1- Agregar un Arco" << endl;
    cout << "2- Eliminar un Arco" << endl;
    cout << "3- Ver el Costo de un Arco" << endl;
    cout << "4- Existe Arco?" << endl;
    cout << "5- Modificar el Costo de un Arco?" << endl;
    cout << endl;
    cout << "6- Agregar Vertice" << endl;
    cout << "7- Eliminar Vertice" << endl;
    cout << "8- ver Cantidad de Vertices" << endl;
    cout << "9- ver Matriz de Adyacencia" << endl;
    cout << endl;
    cout << "0- Salir" << endl;
	cout << "****************************************" << endl;
    cin >> opcion;

	}

//


	return 0;
}
