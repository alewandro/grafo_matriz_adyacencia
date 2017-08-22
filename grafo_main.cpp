#include <iostream>
#include "Grafo.h"

using namespace std;


int main(){

	int vertices, origen, destino, costo, opcion, vert;
	cout << endl << "Ingrese la cantidad de vertices de su Grafo:" << endl;
	cin >> vertices;

	Grafo monigote(vertices);
	cout << endl << "Grafo con " << monigote.Cantidad_vertices() << " vertices creado!" << endl << endl;

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
    cout << endl;
    cout << "0- Salir" << endl;
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
				monigote.Agregar_arco(origen, destino, costo);
				cout << "Se agregó el arco (" << origen << ", " << destino << ", " << costo << ")" << endl;
    		}
	            break;
    		case 2:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				monigote.Eliminar_arco(origen, destino);
				cout << "Se Eliminó el arco (" << origen << ", " << destino << ")" << endl;	
    		}
	            break;
    		case 3:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				cout << "el costo del arco (" << origen << ", " << destino << ") es " << monigote.Ver_costo_arco(origen, destino) << endl;
    		}
	            break;
    		case 4:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
    			if (monigote.Existe_arco(origen, destino))
    				cout << "(" << origen << ", " << destino << ") Existe";
    			else
    				cout << "(" << origen << ", " << destino << ") NO Existe";

    		}
	            break;
    		case 5:{
    			cout << "Ingrese Origen del arco: ";
				cin >> origen;
				cout << "Ingrese Destino del arco: ";
				cin >> destino;
				cout << "Ingrese el Nuevo Costo del arco: ";
				cin >> costo;
				monigote.Modificar_costo_arco(origen, destino, costo);
				cout << "el costo del arco (" << origen << ", " << destino << ") es " << monigote.Ver_costo_arco(origen, destino) << endl;
    		}
    		case 6:{
    			monigote.Agregar_vertice();
    			cout << "Vertice Agregado! " << endl;
    			cout << "Cantidad de vertices: " << monigote.Cantidad_vertices() << endl;
    		}
	            break;
    		case 7:{
    			cout << "Ingrese el N° de Vertice a Eliminar: ";
    			cin >> vert;
    			monigote.Eliminar_vertice(vert);
    			cout << endl << "Vertice Eliminado! " << endl;
    			cout << "Cantidad de vertices: " << monigote.Cantidad_vertices() << endl;
    		}
	            break;
    		case 8:{
    			cout << "Cantidad de vertices: " << monigote.Cantidad_vertices() << endl;
    		}
	            break;

    		default:{
                cout << "Opción invalida\n" << "Ingrese una nueva opción\n";
            }
            break;

		}

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
    cout << endl;
    cout << "0- Salir" << endl;
    cin >> opcion;

	}




	return 0;
}
