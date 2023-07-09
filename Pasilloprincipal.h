#ifndef PASILLOPRINCIPAL_H
#define PASILLOPRINCIPAL_H

#include "Pasillo.h"

class Pasilloprincipal : public Pasillo
{
	public:
		Pasilloprincipal();
		void primeradescripcion();
		void segundadescripcion();
		void primeraDecision();
		void segundaDecision();
		int getcontinuar();
	private:
		int continuar;
};

#endif