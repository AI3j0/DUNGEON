#include "Curandero.h"

using namespace std;
	Curandero::Curandero(){
	}
		void Curandero::curarunavez(Personaje & p, int & vida){
			cout<<"Solo te podre curar esta vez asi que cuidate bien"<<endl;
			cout<<"Tus puntos de vida son: "<<p.getvida()<<endl;
			p.modificarvida(vida);
			cout<<"Tu vida ha aumentado a "<<p.getvida()<<" puntos de vida"<<endl;
			
		}
		void Curandero::curarsegundavez(Personaje & p, int & vida){
			
			p.modificarvida(vida);
			cout<<"Tu vida ha aumentado a "<<p.getvida()<<" puntos de vida"<<endl;
			
		}