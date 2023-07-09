#ifndef PERSONAJE_H
#define PERSONAJE_H
#include"Puerta.h"
#include"Instrucciones.h"
class Personaje : public Puerta, public Instrucciones
{
	public:
		Personaje();
		Personaje(char*);
		void seleccionarClase();
		void seleccionarRaza();
		void setstats();
		int getataque();
		int getvida();
		int getcarisma();
		void getnombre();
		void modificarvida(int &);
		void modificarExp(int &&);
		int getexperiencia();
		void setvida(int &);
		void setataque(int &);
		void setcarisma(int &);
		~Personaje();
	private:
		char* nombre;
		int clase;
		int raza;
		int vida=0;
		int ataque=0;
		int carisma=0;
		int experiencia=0;
	protected:
		
};

#endif