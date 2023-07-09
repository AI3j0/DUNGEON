#ifndef CURANDERO_H
#define CURANDERO_H
#include<iostream>
#include"Personaje.h"
class Curandero
{
	public:
		Curandero();
		void curarunavez(Personaje &, int &);
		void curarsegundavez(Personaje &, int &);
		
	protected:
};

#endif