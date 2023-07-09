#include "Minotauro.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>

Minotauro::Minotauro(){
	this->ataque=10;
    this->vida=15;
}

int Minotauro::modificarVidaPersonaje(Personaje & p){
        		int tmp,dano;
			srand(time(NULL));
			dano=1+(rand () % this->ataque);
			tmp=p.getvida()-dano;
			p.modificarvida(tmp);
			return dano;
		}
	    int Minotauro::modificarVidaEnemigo(Personaje & p){
	    	int tmp=0;
	    	srand(time(NULL));
	    	tmp=1+(rand() % p.getataque());
	     this->vida=vida-tmp;
	     return tmp;
		}
	    int Minotauro::getataque(){
	    	return this->ataque;
		}	
		int Minotauro::getvida(){
			return this->vida;
		}
		int Minotauro::getexperiencia(){
			return 0;
		}
		