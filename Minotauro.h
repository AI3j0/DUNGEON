#ifndef MINOTAURO_H
#define MINOTAURO_H

#include "Enemigos.h"

class Minotauro : public Enemigos
{
	public:
		Minotauro();
		int modificarVidaPersonaje(Personaje &);
	    int modificarVidaEnemigo(Personaje &);
	    int getataque();	
		int getvida();
		int getexperiencia();
	private:
		int ataque=0;
		int vida=0;
		
};

#endif