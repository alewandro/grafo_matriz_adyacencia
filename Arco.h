#ifndef ARCO_H
#define ARCO_H

class Arco{
	public:
		Arco(const int o, const int d, const int c);
		virtual ~Arco();

		int Origen() const;
		int Destino() const;
		int Costo() const;

	private:
		int origen;
		int destino;
		int costo;

};

#endif