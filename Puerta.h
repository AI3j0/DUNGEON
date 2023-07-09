#ifndef PUERTA_H
#define PUERTA_H
#include"Pasilloprincipal.h"
#include<iostream>

using namespace std;
class Puerta
{
	public:
		Puerta();
		int descripcion(Pasilloprincipal &);
		void setstate(Puerta &,Pasilloprincipal &);
		int getstate();
	protected:
		
		int state;
		
};

#endif