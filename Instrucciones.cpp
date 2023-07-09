#include "Instrucciones.h"
#include<iostream>
using namespace std;

	void Instrucciones::combate(){
		cout<<"Primero te explicaremos como funciona la mecanica del combate"<<endl<<"Primeramente atacaran los enemigos y luego tu"<<endl;
		cout<<"Esto se mantendra asi en cualquier tipo de combate porque se supone que estos enemigos tienen conocimiento del terreno que nuestro personaje no posee"<<endl;
        cout<<"El dano realizado por el enemigo sera un numero aleatorio en un rango desde 1 hasta el ataque maximo del propio enemigo"<<endl;
        cout<<"El dano realizado por el personaje sesera un numero aleatorio en un rango desde 1 hasta el ataque maximo del propio personaje"<<endl;
        cout<<"La batalla culminara cuando los puntos de vida de alguna de las dos partes se reduzcan a cero"<<endl;
        
	}
	void Instrucciones::puntosExp(){
		cout<<"Los puntos de experiencia son recompensas obtenidas al derrotar a los enemigos"<<endl;
		cout<<"Dichos puntos seran necesarios para luego poder subir de nivel y mejorar nuestras stats"<<endl;
		cout<<"Para subir de nivel necesitariamos: "<<endl;
		cout<<"Lv1.150 puntos de experiencia"<<endl;
		cout<<"Lv2.350 puntos de experiencia"<<endl;
		cout<<"Lv3.600 puntos de experiencia"<<endl;
	}