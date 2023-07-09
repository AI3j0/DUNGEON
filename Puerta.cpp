#include "Puerta.h"

Puerta::Puerta(){
}
int Puerta::descripcion(Pasilloprincipal & pasillo1){
	int x,contador,contador2;
	cout<<"La puerta frente a la cual te situas es la que da incio a nuestra aventura, pues es nada mas y nada menos la que permite la entrada al laberinto en el que se encuentra encerrado el minotauro"<<endl;
	cout<<"Es una puerta de 3 metros, imponente para cualquier persona"<<endl;
	cout<<"Estas seguro de que deseas empujarla para adentrarte en esta?"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para entrar"<<endl<<"2.Para abandonar la aventura"<<endl;
	do{
	if(!(cin>>x)){
    		cin.clear();
    		cin.ignore(1000, '\n');}
		if(x==1){
		contador2=1;
		system("CLS");
		cout<<"La puerta se abre para dar inicio a vuestra aventura"<<endl;
		
		pasillo1.primeradescripcion();
	
		
		if(pasillo1.getcontinuar()==1){
				contador=1;
			pasillo1.primeraDecision();
		}
		else if(pasillo1.getcontinuar()==2){
		
		contador=1;
			pasillo1.segundaDecision();
		}
	
}
	else if(x==2) {
		contador2=1;
		cout<<"Tal vez necesites pensartelo mejor, vuelve cuando te encuentres mas decidido"<<endl;
		exit(0);
	} else{
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador2!=1);

    		
	return x;
}

	void Puerta::setstate(Puerta & p,Pasilloprincipal & pasillo1){
		this->state=p.descripcion(pasillo1);
	}
int Puerta::getstate(){
	return this->state;
}