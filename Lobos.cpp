#include "Lobos.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

        Lobos::Lobos(){
        	this->ataque=2;
        	this->vida=4;
        	this->experiencia=50;
		}
		int Lobos::modificarVidaPersonaje(Personaje & p){
			int tmp,dano;
			srand(time(NULL));
			dano=1+(rand () % this->ataque);
			tmp=p.getvida()-dano;
			p.modificarvida(tmp);
			return dano;
		}
	    int Lobos::modificarVidaEnemigo(Personaje & p ){
	    	int tmp=0;
	    	srand(time(NULL));
	    	tmp=1+(rand() % p.getataque());
	     this->vida=vida-tmp;
	     return tmp;
		}
		int Lobos::getvida(){
			return this->vida;
		}
		int Lobos::getexperiencia(){
			return this->experiencia;
		}
		 int Lobos::getataque(){
		 	return this->ataque;
		 }