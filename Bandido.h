#ifndef BANDIDO_H
#define BANDIDO_H

#include "Enemigos.h"

class Bandido : public Enemigos
{
	public:
		 Bandido();
		 int modificarVidaPersonaje(Personaje &);
	    int modificarVidaEnemigo(Personaje &);
	    int getataque();	
		int getvida();
		int getexperiencia();
	private:
		int ataque=0,vida=0,experiencia=0;
};

#endif