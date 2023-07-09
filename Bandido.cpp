#include "Bandido.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>
Bandido::Bandido(){
	this->ataque=3;
	this->vida=5;
	this->experiencia=75;
}
        int Bandido::modificarVidaPersonaje(Personaje & p){
        		int tmp,dano;
			srand(time(NULL));
			dano=1+(rand () % this->ataque);
			tmp=p.getvida()-dano;
			p.modificarvida(tmp);
			return dano;
		}
	    int Bandido::modificarVidaEnemigo(Personaje & p){
	    	int tmp=0;
	    	srand(time(NULL));
	    	tmp=1+(rand() % p.getataque());
	     this->vida=vida-tmp;
	     return tmp;
		}
	    int Bandido::getataque(){
	    	return this->ataque;
		}	
		int Bandido::getvida(){
			return this->vida;
		}
		int Bandido::getexperiencia(){
			return this->experiencia;
		}