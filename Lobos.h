#ifndef LOBOS_H
#define LOBOS_H

#include "Enemigos.h"

class Lobos : public Enemigos
{
	public:
		Lobos();
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