#include "Personaje.h"
#include<string.h>
Personaje::Personaje(){
}
Personaje::Personaje(char * nombre){
	this->nombre= new char[strlen(nombre)+1];
	strcpy(this->nombre,nombre);
}



void Personaje::seleccionarClase(){
	int contador=0;
	cout<<"Bueno como sabras en este mundo no todos somos iguales ni nos destacamos en las mismas esferas"<<endl;
	cout<<"Podrias decirme segun tus habilidades que tipo de heroe eres?"<<endl;
	cout<<"Selecciona: "<<endl;
	cout<<"1.Guerrero: Eres un luchador habil, fuerte, aunque un poco torpe a la hora de relacionarse"<<endl<<"Vida=10  Ataque=10  Carisma=2"<<endl;
	cout<<"2.Mago: Eres todo un experto en la persuasion y en la magia y por tanto posees muy poderosos ataques y gran conocimiento del mundo aunque no eres tan resistente a fuertes ataques"<<endl<<"Vida=5  Ataque=12  Carisma=5"<<endl;
	cout<<"3.Picaro:Tus mayores ventajas las obtienes al relacionarte y a pesar de que no eres un gran luchador la vida te ha ensenado a aguantar duros golpes"<<endl<<"Vida=10  Ataque=7  Carisma= 5"<<endl;
    
    do{
    	if(!(cin>>clase)){
    		cin.clear();
    		cin.ignore(1000, '\n');
		}
    	if ((clase==1)){
		
    		contador=1;
		} else if(clase==2){
			contador=1;
		}else if(clase==3){
			contador=1;
		}
		else{
			cout<<"Por favor elija una clase"<<endl;
		}
    	
	} while(contador!=1);
}


void Personaje::seleccionarRaza(){
	int contador=0;
	cout<<"Ahora podrias decirme segun tus caracteristicas fisicas a que raza perteneces"<<endl;
	cout<<"Selecciona: "<<endl;
	cout<<"1.Humano: Perteneces a la raza humana medianamente habiles en casi todo"<<"Vida+1  Ataque+1  Carisma+1"<<endl;
	cout<<"2.Orco: Eres de esos seres que parecen estar preparados solo para la guerra"<<"Vida+2  Ataque+2  Carisma-1"<<endl;
	cout<<"3.Elfos: Raza que cree ser superior a las demas pues tienen habilidades como nadie para la magia y son grandes comerciantes"<<"Vida+0  Ataque+2  Carisma+1"<<endl;
     do{
    	if(!(cin>>raza)){
    		cin.clear();
    		cin.ignore(1000, '\n');}
    	if ((raza==1)){
		
    		contador=1;
		} else if(raza==2){
			contador=1;
		}else if(raza==3){
			contador=1;
		}
		else{
			cout<<"Por favor elija una raza"<<endl;
		}
    	
	} while(contador!=1);
	system("CLS");
}
void Personaje::setstats(){
  if(clase==1 && raza==1){
  	ataque=11;
  	vida=11;
  	carisma=3;
  } else if(clase==1 && raza==2){
  	ataque=12;
  	vida=12;
  	carisma=1;
  }else if(clase==1 && raza==3){
  	ataque=12;
  	vida=10;
  	carisma=3;
  }else if(clase==2 && raza==1){
  	ataque=13;
  	vida=6;
  	carisma=6;
  }else if(clase==2 && raza==2){
    ataque=14;
  	vida=7;
  	carisma=4;  	
  }else if(clase==2 && raza==3){
  	ataque=14;
  	vida=5;
  	carisma=6;
  }else if(clase==3 && raza==1){
  	ataque=8;
  	vida=11;
  	carisma=6;
  }else if(clase==3 && raza==2){
  	ataque=9;
  	vida=12;
  	carisma=4;
  }else if(clase==3 && raza==3){
  	ataque=9;
  	vida=10;
  	carisma=6;
  }
  	
  }
  

int Personaje::getataque(){
	return ataque;
}

int Personaje::getvida(){
return vida;
}

int Personaje::getcarisma(){
	return carisma;
}

void Personaje::getnombre(){
	cout<<nombre<<endl;
}

void Personaje::modificarvida(int & vida){
	this->vida=vida;
}

void Personaje::modificarExp(int && experiencia){
	this->experiencia=experiencia;
}
	int Personaje::getexperiencia(){
		return this->experiencia;
	}
Personaje::~Personaje(){
	delete []nombre;
}

        void Personaje::setvida(int & vida){
        	this->vida=vida;
		}
		
		void Personaje::setataque(int & ataque){
			this->ataque=ataque;
		}
		
		void Personaje::setcarisma(int & carisma){
			this->carisma=carisma;
		}

