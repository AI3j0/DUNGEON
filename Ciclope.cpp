#include "Ciclope.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>


Ciclope::Ciclope(){
	        this->ataque=6;
        	this->vida=7;
        	this->experiencia=200;
}
int Ciclope::modificarVidaPersonaje(Personaje & p){
        		int tmp,dano;
			srand(time(NULL));
			dano=1+(rand () % this->ataque);
			tmp=p.getvida()-dano;
			p.modificarvida(tmp);
			return dano;
		}
	    int Ciclope::modificarVidaEnemigo(Personaje & p){
	    	int tmp=0;
	    	srand(time(NULL));
	    	tmp=1+(rand() % p.getataque());
	     this->vida=vida-tmp;
	     return tmp;
		}
	    int Ciclope::getataque(){
	    	return this->ataque;
		}	
		int Ciclope::getvida(){
			return this->vida;
		}
		
		int Ciclope::getexperiencia(){
			return this->experiencia;
		}