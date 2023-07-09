#ifndef CICLOPE_H
#define CICLOPE_H

#include "Enemigos.h"

class Ciclope : public Enemigos
{
	public:
	    Ciclope();
		int modificarVidaPersonaje(Personaje &);
	    int modificarVidaEnemigo(Personaje &);
	    int getataque();	
		int getvida();
		int getexperiencia();
	private:
		int ataque=0;
		int vida=0;
		int experiencia=0;
};

#endif