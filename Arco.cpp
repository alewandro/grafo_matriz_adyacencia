#include "Arco.h"

	Arco::Arco(const int o, const int d, const int c){
		origen= o;
		destino= d;
		costo= c;

	}

	Arco::~Arco(){
	}

	int Arco::Origen() const{
		return origen;
	}

	int Arco::Destino() const{
		return destino;
	}

	int Arco::Costo() const{
		return costo;
	}

	