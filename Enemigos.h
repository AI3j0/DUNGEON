#ifndef ENEMIGOS_H
#define ENEMIGOS_H
#include"Personaje.h"
class Enemigos :public Personaje
{
	public:
		virtual int modificarVidaPersonaje(Personaje &)=0;
		virtual int modificarVidaEnemigo(Personaje &)=0;
		virtual int getvida()=0;
		virtual int getexperiencia()=0;
		virtual int getataque()=0;		
	protected:
		Enemigos();
		
};

#endif