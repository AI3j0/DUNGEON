#include <iostream>
#include<conio.h>
#include"Puerta.h"
#include"Personaje.h"
#include"Pasilloprincipal.h"
#include"Pasillo.h"
#include"Lobos.h"
#include"Curandero.h"
#include"Bandido.h"
#include"Minotauro.h"
#include"Ciclope.h"
#include<cstdlib>

void camaraEsfinge(Personaje &, Curandero &,Bandido &,Minotauro &,Ciclope &);
void pasilloCiclope(Personaje &, Curandero &,Bandido &,Minotauro &,Ciclope &);
void pasilloMinotauro(Personaje &, Curandero &,Bandido &,Minotauro &,Ciclope &);
void lobosDerrotados(Personaje &, Curandero &, Bandido &,Minotauro &,Ciclope &);
void camaraPortal(Personaje &, Curandero &,Bandido &,Minotauro &,Ciclope &);
void camaraCurador(Personaje &,Curandero &,Bandido &,Minotauro &,Ciclope &);
void pasilloIzquierdo(Personaje &, Curandero & ,Bandido &,Minotauro &,Ciclope &);
void pasilloArriba(Personaje &,Curandero &, Bandido &,Minotauro &,Ciclope & );
void seleccionarnombre(char*);
void primerPasillo(Personaje &,Curandero &,Bandido &,Minotauro &,Ciclope &);
void comienzo(Personaje & );
void primercombate(Lobos &,Lobos &,Personaje &);
int contador=0,contador1=0,contador2=0,x=0,contador3=0,contador4=0,atacar=0,tmp=0,vidaBase=0, count=0, count1=0,count2=0,mjolnir=0,count3=0,count4=0, count5=0;
	char* nombre= new char [15];
int main() {
	seleccionarnombre(nombre);
	Curandero c;
	Personaje p(nombre);
	Puerta p1;
	Pasilloprincipal pasillo1;

	delete nombre;
	comienzo(p);
	p.setstate(p1,pasillo1);
	p.combate();
	Lobos l0,l1;
	primercombate(l0,l1,p);
	Bandido b;
	Minotauro m;
	Ciclope o;
	primerPasillo(p,c,b,m,o);
  
	
    
	getch();
	return 0;
}

void seleccionarnombre(char * nombre){
	do{
	cout<<"Bienvenido aventurero"<<endl<<"Como te llamas?"<<"(El nombre solo tendra 10 caracteres asegurese de no intrudcir mas de lo debido)"<<endl;
	cin>>nombre;
	cout<<"Estas seguro de que deseas llamarte asi?"<<endl<<"Selecciona:"<<endl<<"1.Si"<<endl<<"2.No"<<endl;
	do{
	if(!(cin>>x)){
		cin.clear();
		cin.ignore(1000, '\n');
	} if (x==1){
		contador3=1;
	}else if(x==2){
		contador3=1;
	} else{
		cout<<"Repita su seleccion"<<endl;
	}

	}while(contador3!=1);
	system("CLS");
}while(x!=1);
	system("CLS");
	
}

void comienzo(Personaje & p){
	do{
		cout<<"Antes de comenzar nuestra aventura debemos seleccionar que tipo de personaje deseas ser"<<endl;
		cout<<"Primeramente debemos saber a que clase perteneces"<<endl;
		p.seleccionarClase();
		p.seleccionarRaza();
		p.setstats();
	    cout<<"Muy bien nuestro personaje tendra las siguientes caracteristicas"<<endl;
        cout<<"Nombre: ";
        p.getnombre();
        cout<<"Ataque: "<<p.getataque()<<endl;
        cout<<"Vida: "<<p.getvida()<<endl;
        cout<<"Carisma: "<<p.getcarisma()<<endl;
		cout<<"Estas de acuerdo con tus decisiones"<<endl;
		cout<<"Selecciona: "<<endl<<"1.Si estas de acuerdo con tus decisiones"<<endl<<"2.Si deseas volver a comenzar a crear el personaje"<<endl;
		do{
			if(!(cin>>contador)){
    		cin.clear();
    		cin.ignore(1000, '\n');}
			if(contador==1){
				contador1=1;
			}else if(contador==2){
				contador1=1;
			}else{
				cout<<"Repita su seleccion"<<endl;
			}
		}while(contador1!=1);
		system("CLS");
		
		
	}while(contador!=1);
		system("CLS");
	vidaBase=p.getvida();
}

void primercombate(Lobos & l0,Lobos & l1,Personaje & p){
	cout<<"Comienza el primer combate"<<endl;
	cout<<"Comienzan atacando los lobos"<<endl;
	cout<<"El primer lobo realiza "<<l0.modificarVidaPersonaje(p)<<" puntos de dano"<<endl;
	cout<<"El segundo lobo tambien ataca y realiza "<<l1.modificarVidaPersonaje(p)<<" puntos de dano"<<endl;
	cout<<"Tus puntos de vida quedaron reducidos a "<<p.getvida()<<endl;
	cout<<"Muy bien ahora es tu turno y podras atacar o intentar huir"<<endl;
	do{
	cout<<"Selecciona: "<<endl<<"1.Para atacar"<<endl<<"2.Para huir"<<endl;
	do{
	
    if(!(cin>>atacar)){
    	cin.clear();
    	cin.ignore(1000, '\n');
	}
	if(atacar==1){
		contador4=1;
	} else if(atacar==2){
		contador4=1;
	}else{
		contador4=0;
		cout<<"Repita su seleccion"<<endl;
	}
		system("CLS");
	}while(contador4!=1);
	while(atacar==2){
  	cout<<"Intentas huir pero los lobos son muy rapido y no lo permiten"<<endl;
  	cout<<"En cambio pierdes un punto de vida pero todavia tienes el turno"<<endl;
  	tmp=p.getvida()-1;
  	p.modificarvida(tmp);
  	if(p.getvida()<=0){
	cout<<"Tus puntos de vida han sido reduciodos a 0 has perdido el juego"<<endl;
	exit(0);}
  	cout<<"Ahora tus puntos de vida son: "<<p.getvida()<<endl;
  	cout<<"Que deseas hacer"<<endl;
  	cout<<"Selecciona :"<<endl<<"1.Para atacar"<<endl<<"2.Para volver a intentar a huir"<<endl;
	  
  	do{
	
    if(!(cin>>atacar)){
    	cin.clear();
    	cin.ignore(1000, '\n');
	}
	if(atacar==1){
		contador4=1;
	} else if(atacar==2){
		contador4==1;
	}else{
		contador4=0;
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador4!=1);
		system("CLS");
}
	
  if(atacar==1){
    cout<<"Atacas al primer lobo y le realizas "<<l0.modificarVidaEnemigo(p)<<" puntos de dano"<<endl;
    
    if(l0.getvida()>0){
    cout<<"La vida de dicho lobo se ha reducido a "<<l0.getvida()<<" puntos de vida"<<endl;
    cout<<"Vuelven a atacar los lobos y esta vez te realizan "<<l0.modificarVidaPersonaje(p)<<" y "<<l1.modificarVidaPersonaje(p)<<" de dano el primer y el segundo lobo respectivamente"<<endl;
    if(p.getvida()<=0){
	cout<<"La vida de tu personaje ha llegado a 0 has perdido el juego"<<endl;
	exit(0);
}
	cout<<"Decides seguir luchando o intentaras huir "<<endl;
}
}

}while(l0.getvida()>0);

	cout<<"La vida de dicho lobo se ha reducido a 0 puntos de vida"<<endl;
	cout<<"EL lobo restante sale huyendo ante tu superioridad"<<endl;
	cout<<"Felicitaciones acabas de ganar 100 puntos de experiencia"<<endl;
	p.puntosExp();
	p.modificarExp(100);
	}
void primerPasillo(Personaje & p,Curandero & c, Bandido & b,Minotauro & m,Ciclope & o){
	int seleccionPasillo=0,contador;
		cout<<"Ahora te encuentras con una incognita pues el laberinto se divide en 3 caminos"<<endl;
	cout<<"Hacia donde deseas ir"<<endl;
	cout<<"Selecciona: "<<endl;
	cout<<"1.Para dirigirte hacia el pasillo de enfrente teniendo en cuenta que te encuentras de espalda a la puerta"<<endl;
	cout<<"2.Para dirigirte hacia el pasillo de la izquierda"<<endl;
	do{
	if(!(cin>>seleccionPasillo)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccionPasillo==1){
			system("CLS");
		cout<<"Te diriges hacia el frente"<<endl;
			
		contador=1;
		pasilloArriba(p,c,b,m,o);
	}
	else if(seleccionPasillo==2){
		system("CLS");
		cout<<"Te diriges hacia la izquierda"<<endl;
		contador=1;
			
		pasilloIzquierdo(p,c,b,m,o);
	} else{
		cout<<"Repita su seleccion";
	}
	
	
}while(contador!=1);
	system("CLS");
}

void pasilloArriba(Personaje &p,Curandero & c,Bandido & b,Minotauro & m,Ciclope & o){
	int contador=0, seleccion=0;
	cout<<"Arriba te encuentras con dos camaras una a la izquierda y otra a la derecha"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para ir hacia la izquierda"<<endl<<"2.Para ir hacia la derecha"<<endl<<"3.Para regresar a la habitacion anterior"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Te diriges hacia la izquierda"<<endl;
			
		contador=1;
		camaraCurador(p,c,b,m,o);
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te diriges hacia la derecha"<<endl;
			
		camaraPortal(p,c,b,m,o);
		contador=1;
	
	} else if(seleccion==3){
		system("CLS");
		cout<<"Regresas a la habitacion anterior"<<endl;
			
		contador=1;
		lobosDerrotados(p,c,b,m,o);
		}else{
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador!=1);
	
}
	
	void pasilloDerecho(){
		int contador=0,seleccion=0;
		cout<<"Aunque el camino continua a tu izquierda te encuentras con una camara"<<endl;
		cout<<"Selecciona: "<<endl<<"1.Para ir hacia la izquierda"<<endl<<"2.Para continuar en el camino"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
				system("CLS");
		cout<<"Te diriges hacia la izquierda"<<endl;
		
		contador=1;
	}else if(seleccion==2){
		system("CLS");
		cout<<"Continuas por el mismo camino"<<endl;
			
		contador=1;
	
	} else if(seleccion==3){
			system("CLS");
		cout<<"Regresas a la habitacion anterior"<<endl;
		
		contador=1;
		
		}else{
		cout<<"Repita su seleccion";
	}
	}while(contador!=1);
	
	}
	
	
	void camaraCurador(Personaje & p, Curandero & c,Bandido & b,Minotauro & m,Ciclope & o){
		int seleccion=0,contador=0;
		cout<<"Abres la camara y te das cuenta que en esta se encuentra esperandote una persona"<<endl;
		cout<<"Es nada mas y nada menos que un curandero"<<endl;
		if(count==2 || count1==1){
			cout<<"Lo siento no tengo ya nada que ofrecerte"<<endl;
				
		}
		if(count==1){
			cout<<"Lo prometido es deuda te curare por ultima vez"<<endl;
			cout<<"Tus puntos de vida son: "<<p.getvida()<<endl;
			c.curarsegundavez(p,vidaBase);
			count++;
		}
		while(count==0){
		
		if(p.getcarisma()>=5){
			cout<<"Me has agradado viajero"<<endl<<"Te curare por esta vez y solo una vez mas"<<endl;
			cout<<"Tus puntos de vida son: "<<p.getvida()<<endl;
			c.curarsegundavez(p,vidaBase);
			count=1;
		}else {
			
			c.curarunavez(p,vidaBase);
			count=2;
			count1=1;
		}
		
	}
	    cout<<"Sales de la camara"<<endl;
		cout<<"Hacia donde deseas ir"<<endl;
		cout<<"Selecciona: "<<endl<<"1.Para ir hacia la otra camara"<<endl<<"2.Para regresar a la camara"<<endl<<"3.Para regresar al pasillo donde vencista a los lobos"<<endl;
		
		do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Te diriges hacia la otra camara "<<endl;
			
		camaraPortal(p,c,b,m,o);
		contador=1;
	}else if(seleccion==2){
			system("CLS");
		cout<<"Regresas a la habitacion anterior"<<endl;
		
		camaraCurador(p,c,b,m,o);
		contador=1;
	
	} else if(seleccion==3){
			system("CLS");
		cout<<"Vas al pasillo anterior donde derrotaste a los lobos"<<endl;
		
		contador=1;
		lobosDerrotados(p,c,b,m,o);
		}else{
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador!=1);
	}
	
void camaraPortal(Personaje & p, Curandero & c, Bandido & b,Minotauro & m,Ciclope & o){
	int seleccion=0, contador=0,vida=p.getvida()+3;
	while(count2==0){
	cout<<"Acabas de entrar a la camara y te sumerges en un portal que te lleva directamente hacia otra camara totalmente cerrada en la que encuentras un objeto"<<endl;
	cout<<"Es una armadura de cuchillas la cual aumenta tu vida en 3 puntos"<<endl;
	cout<<"Deseas equiparte dicha armadura"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para equiparte la armadura"<<endl<<"2.Para no equiparte nada"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
		cout<<"Te equipas la armadura y tu vida maxima aumenta en 3 puntos"<<endl;
		p.modificarvida(vida);
		vidaBase+=3;
		cout<<"Ahora tienes "<<p.getvida()<<" puntos de vida y tu vida maxima aumento a "<<vidaBase<<" puntos de vida"<<endl;
	count2++;
		system("CLS");
		contador=1;
	}else if(seleccion==2){
		cout<<"No deseas equiparte nada y tus puntos de vida se mantienen iguales"<<endl;
		
		contador=1;
count2++;
}else{
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador!=1);

	
		cout<<"Sales de la habitacion por el mismo portal por el cual viniste y llegas al punto donde te encontrabas anteriormente"<<endl;
		cout<<"Notas que el portal se cierra de manera abrupta, ya no podras regresar a aquella habitacion"<<endl;
		cout<<"Sales de la habitacion y te encuentras en el pasillo anteriror"<<endl;
		cout<<"Hacia donde deseas ir"<<endl;cout<<"Selecciona: "<<endl<<"1.Para ir hacia la otra camara"<<endl<<"2.Para ir hacia el anterior pasillo"<<endl<<"3.Para regresar a la camara"<<endl;
		
		do{
		
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Te diriges hacia la otra camara "<<endl;
			camaraCurador(p,c,b,m,o);
		contador=1;
	}else if(seleccion==2){
		system("CLS");
		
		lobosDerrotados(p,c,b,m,o);
		contador=1;
	}else if(seleccion==3){
		system("CLS");
		cout<<"Vuelves a la camara"<<endl;
		camaraPortal(p,c,b,m,o);
	}
	else{
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador!=1);
	
}

 if(count2==1){
	cout<<"La habitacion se encuentra vacia"<<endl;
	cout<<"Que deseas hacer"<<endl;
	cout<<"Hacia donde deseas ir"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para ir hacia la otra camara"<<endl<<"2.Para ir hacia el anterior pasillo"<<endl;
		
		do{
		
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Te diriges hacia la otra camara "<<endl;
			camaraCurador(p,c,b,m,o);
		contador=1;
	}else if(seleccion==2){
		system("CLS");
		
		lobosDerrotados(p,c,b,m,o);
		contador=1;
	}
	else{
		cout<<"Repita su seleccion"<<endl;
	}
	}while(contador!=1);
	
}
}
void lobosDerrotados(Personaje & p, Curandero & c,Bandido & b,Minotauro & m,Ciclope & o){
	int seleccionPasillo=0,contador=0;
	cout<<"Vuelves a la habitacion donde venciste a los lobos"<<endl;
	cout<<"Que deseas hacer"<<endl;
	cout<<"Selecciona: "<<endl;
	cout<<"1.Para dirigirte hacia el pasillo de enfrente teniendo en cuenta que te encuentras de espalda a la puerta"<<endl;
	
	cout<<"2.Para dirigirte hacia el pasillo de la izquierda"<<endl;
	do{
	if(!(cin>>seleccionPasillo)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccionPasillo==1){
			system("CLS");
		cout<<"Te diriges hacia el frente"<<endl;
		
		contador=1;
		pasilloArriba(p,c,b,m,o);
	
	
	}
	else if(seleccionPasillo==2){
		system("CLS");
		cout<<"Te diriges hacia la izquierda"<<endl;
		contador=1;
		pasilloIzquierdo(p,c,b,m,o);
	} else{
		cout<<"Repita su seleccion"<<endl;
	}
	
	
}while(contador!=1);
	
}
void pasilloIzquierdo(Personaje & p,Curandero & c,Bandido & b,Minotauro & m,Ciclope & o){
	int atacar=0,contador=0,contador1=0,seleccion=0,contador3=0;
	if (count3==1){
	cout<<"Vuelves a la habitacion donde derrotaste al bandido y ahora debes decidir hacia donde deseas ir"<<endl;
	cout<<"A la derecha se encuentra una camara y a la izquierda otra"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para ir hacia la izquierda"<<endl<<"2.Para ir hacia la derecha"<<endl<<"3.Para regresar a la habitacion anterior"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Te diriges hacia la izquierda"<<endl;
		pasilloMinotauro(p,c,b,m,o);
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te diriges hacia la derecha"<<endl;
		pasilloCiclope(p,c,b,m,o);
		contador3=1;
	
	} else if(seleccion==3){
		system("CLS");
		cout<<"Regresas a la habitacion anterior"<<endl;
		contador3=1;
		lobosDerrotados(p,c,b,m,o);
		}else{
		
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	}while(contador3!=1);
}
	if(contador1==0){
	cout<<"Te encuentras con un bandido el cual te ataca apenas entras al corredor y te realiza "<<b.modificarVidaPersonaje(p)<<" puntos dano"<<endl;
	if(p.getvida()>0){
	cout<<"Tu vida se ha reducido a "<<p.getvida()<<" puntos de vida"<<endl;
	cout<<"Que deseas hacer"<<endl;}
	if(p.getvida()<=0){
		cout<<"Tu vida se ha reducido a 0 "<<endl;
		cout<<"El juego se ha terminado, has perdido"<<endl;
		exit(0);
	}
		do{
	cout<<"Selecciona: "<<endl<<"1.Para atacar"<<endl<<"2.Para huir"<<endl;

	
	do{
	
    if(!(cin>>atacar)){
    	cin.clear();
    	cin.ignore(1000, '\n');
	}
	if(atacar==1){
		system("CLS");
		contador=1;
	} else if(atacar==2){
		system("CLS");
		contador=1;
	}else{
		contador=0;
		cout<<"Repita su seleccion"<<endl;
	
	}
	}while(contador!=1);
	if (atacar==1){
		cout<<"Atacas al bandido y le realizas "<<b.modificarVidaEnemigo(p)<<" puntos de dano"<<endl;
		if(b.getvida()>0){
			cout<<"La vida del bandido se ha reducido a "<<b.getvida()<<" puntos de vida"<<endl;
			cout<<"El bandido vuelve a atacarte y te realiza "<<b.modificarVidaPersonaje(p)<<" puntos de dano"<<endl;
				if(p.getvida()<=0){
					cout<<"Tus puntos de vida se han reducido a 0"<<endl;
				cout<<"Has perdido el juego"<<endl;
				exit(0);
			}
			cout<<"Ahora tienes "<<p.getvida()<<" puntos de vida"<<endl;
		
			cout<<"Que deseas hacer"<<endl;
		}else if (b.getvida()<=0){
			cout<<"El bandido cae desplomado a tus pies"<<endl;
			cout<<"Obtienes 75 puntos de experiencia"<<endl;
			p.modificarExp(p.getexperiencia()+75);
			contador1=2;
			if(p.getexperiencia()==175){
				cout<<"Felicidades subes de nivel y todas tus estadisticas aumentan en un punto"<<endl;
				int a=p.getataque()+1;
				vidaBase=vidaBase+1;
				int c=p.getcarisma()+1;
				p.setataque(a);
				p.setcarisma(c);
				cout<<"Ahora tus puntos de ataque son: "<<p.getataque()<<endl;
				cout<<"Ahora tus puntos de vida maximo son: "<<vidaBase<<endl;
				cout<<"Ahora tus puntos de carisma son: "<<p.getcarisma()<<endl;
			}
		}
	}else{
		contador1=1;
	}
	
}while(contador1==0);
if(contador1==1){

cout<<"Huyes y de esta manera regresas a la habitacion anterior"<<endl;
lobosDerrotados(p,c,b,m,o);}
if (contador1==2){
 count3=1;
	cout<<"Vulves a encontrarte en una encrucijada hay dos camaras adyacentes a esta habitacion"<<endl;
	cout<<"Ahora que deseas hacer"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para ir hacia la izquierda"<<endl<<"2.Para ir hacia la derecha"<<endl<<"3.Para regresar a la habitacion anterior"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Te diriges hacia la izquierda"<<endl;
			
			contador3=1;
		pasilloMinotauro(p,c,b,m,o);
	
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te diriges hacia la derecha"<<endl;
		pasilloCiclope(p,c,b,m,o);
		contador3=1;
	   
	} else if(seleccion==3){
		system("CLS");
		cout<<"Regresas a la habitacion donde venciste a los lobos"<<endl;
		contador3=1;
	
		lobosDerrotados(p,c,b,m,o);
		}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
		
	}
	}while(contador3!=1);
}
}


}
  
	void pasilloMinotauro(Personaje & p, Curandero & c,Bandido & b,Minotauro & m,Ciclope & o){
		if(mjolnir==0){
			
		cout<<"Llegas a una camara en donde puedes ver una puerta la cual tiene un ojo que se abre para ver si tienes un objeto en especifico"<<endl;
		cout<<"El ojo vuelve a cerrarse pues no posees dicho objeto"<<endl;
		cout<<"Sales hacia el corredor pues no tienes mas nada que hacer en este lugar"<<endl;
		pasilloIzquierdo(p,c,b,m,o);
	}else{
			cout<<"Llegas a una camara en donde puedes ver una puerta la cual tiene un ojo que se abre para ver si tienes un objeto en especifico"<<endl;
			cout<<"Dicho ojo cambia de color y se hace polvo cayendo de esta manera la puerta y dejandose ver lo que contenia dentro"<<endl;
			cout<<"Se ve la figura de una bestia imponente"<<endl;
			cout<<"Es el minotauro"<<endl;
			cout<<"Sientes como la puerta que antes caia se vuelve a elevar sobre tus espaldas"<<endl;
			cout<<"No hay marcha atras debes luchar contra el minotauro"<<endl;
			cout<<"El minotauro te ataca y te realiza "<<m.modificarVidaPersonaje(p)<<" puntos de dano"<<endl;
			if(p.getvida()<0){
				cout<<"Tus puntos de vida se han reducido a 0"<<endl;
				cout<<"Te falto muy poco pero lastimosamente has perdido"<<endl;
				exit(0);
			}
			if(p.getvida()>0){
		    cout<<"Ahora tus puntos de vida son "<<p.getvida()<<endl;
		    cout<<"Estas entre la espada y la pared sin embargo sientes como un poder mayor sacude tu cuerpo"<<endl;
		    cout<<"Es el martillo de mjolnir el cual realiza un poderoso ataque que destruye por completo al enemigo"<<endl;
		    cout<<"De esta manera se termina la longeva vida del minotauro y con ello los sacrificios a los cuales eran sometidos multiples jovenes ano tras ano en Grecia"<<endl;
		    cout<<"Felicidades ";
			p.getnombre();
			cout<<" has culminado el juego"<<endl;
			exit(0);
		}
	}
	}
	
	void pasilloCiclope(Personaje & p, Curandero & c,Bandido & b,Minotauro & m,Ciclope & o){
		int atacar=0,contador=0,contador1=0,seleccion=0,contador3=0;
		if(count4==1){
	cout<<"Vuelves a la habitacion donde se encontraba el ciclope"<<endl;
	cout<<"Que deseas hacer"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para ir abrir la puerta que da entrada a la otra camara"<<endl<<"2.Para regresar al pasillo izquierdo"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Abres la puerta"<<endl;
         	camaraEsfinge(p,c,b,m,o);
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Regresas al pasillo anterior"<<endl;
		contador1=3;
		contador3=1;
		pasilloIzquierdo(p,c,b,m,o);
	 
		}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	}while(contador3!=1);
}
		if(contador1==0 && count4==0){
		cout<<"LLegas a una habitacion en la cual se encuentra un ciclope custodiando una puerta"<<endl;
		cout<<"Para poder acceder a esta tendras que vencer a este ciclope"<<endl;
		cout<<"Dicho ciclope se encuentra de espaldas por lo que por esta vez podras desarrollar el primer ataque"<<endl;
		
		cout<<"Deseas atacar o huir"<<endl;
		do{
		cout<<"Selecciona: "<<endl<<"1.Para atacar"<<endl<<"2.Para huir"<<endl;
		
	
	do{
	
    if(!(cin>>atacar)){
    	cin.clear();
    	cin.ignore(1000, '\n');
	}
	if(atacar==1){
		system("CLS");
		contador=1;
	} else if(atacar==2){
		system("CLS");
		contador=1;
	}else{
		contador=0;
		cout<<"Repita su seleccion"<<endl;
	
	}
	}while(contador!=1);
	if (atacar==1){
		cout<<"Atacas al ciclope y le realizas "<<o.modificarVidaEnemigo(p)<<" puntos de dano"<<endl;
		if(o.getvida()>0){
			cout<<"La vida del ciclope se ha reducido a "<<o.getvida()<<" puntos de vida"<<endl;
			cout<<"El ciclope te ataca y te realiza "<<o.modificarVidaPersonaje(p)<<" puntos de dano"<<endl;
			if(p.getvida()<=0){
				cout<<"Tus puntos de vida se hand reducido a 0"<<endl;
				cout<<"Has perdido el juego"<<endl;
				exit(0);
			}
			cout<<"Ahora tienes "<<p.getvida()<<" puntos de vida"<<endl;
			
			cout<<"Que deseas hacer"<<endl;
		}else if (o.getvida()<=0){
			cout<<"El ciclope muere tras este golpe"<<endl;
			cout<<"Obtienes 200 puntos de experiencia"<<endl;
			
			p.modificarExp(p.getexperiencia()+200);
			contador1=2;
			if(p.getexperiencia()==500){
				cout<<"Felicidades subes de nivel y todas tus estadisticas aumentan en un punto"<<endl;
				int a=p.getataque()+1;
				vidaBase=vidaBase+1;
				int c=p.getcarisma()+1;
				p.setataque(a);
				p.setcarisma(c);
				cout<<"Ahora tus puntos de ataque son: "<<p.getataque()<<endl;
				cout<<"Ahora tus puntos de vida maximo son: "<<vidaBase<<endl;
				cout<<"Ahora tus puntos de carisma son: "<<p.getcarisma()<<endl;
				contador1=2;
			}
		}
	}else{
		contador1=1;
	}
	
}while(contador1==0);
if(contador1==1){

cout<<"Huyes y de esta manera regresas a la habitacion anterior"<<endl;
pasilloIzquierdo(p,c,b,m,o);}
if (contador1==2){
count4=1;;
cout<<"La puerta que antes estaba siendo custodiada por el ciclope queda descubierta"<<endl;
cout<<"Ahora que deseas hacer"<<endl;
	cout<<"Selecciona: "<<endl<<"1.Para ir abrir la puerta"<<endl<<"2.Para regresar a la habitacion anterior"<<endl;
	do{
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Abres la puerta"<<endl;
         camaraEsfinge(p,c,b,m,o);	
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Regresas al pasillo anterior"<<endl;
		contador1=3;
		contador3=1;
		pasilloIzquierdo(p,c,b,m,o);
	 
		}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	}while(contador3!=1);
}
}
 
}

void camaraEsfinge(Personaje & p, Curandero & c,Bandido & b,Minotauro & m,Ciclope &o){
	int contador3=0,seleccion=0;
	if(count5==1){
		cout<<"La habitacion en la que se encontraba la esfinge esta vacia"<<endl;
		
		pasilloCiclope(p,c,b,m,o);
	}
	if(count5==0){
	
	cout<<"Entras a una camara cercana al mar en la cual te encuentras con una esfinge"<<endl;
	cout<<"Notas como la puerta que estaba detras de ti se cierra"<<endl;
	cout<<"Te acercas a la esfinge"<<endl;
	cout<<"Hola viajero"<<endl<<"Te ofrezco un trato"<<endl;
	cout<<"Para poder salir de esta habitacion tendras que descubrir la respuesta para este acertijo"<<endl;
	cout<<"Que resucita a los muertos?, que te devuelve la infancia y te hace reir o llorar?.Que nace en un instante y dura una eternidad?"<<endl;
	if(p.getcarisma()>5){
		cout<<"Tienes 2 oportunidades, si no aciertas en ninguna de las dos, te comere"<<endl;
		cout<<"Si aciertas te dejare salir y ademas te dare un objeto necesario para que culmines tu aventura"<<endl;
		do{
		cout<<"Selecciona: "<<endl<<"1.Los recuerdos"<<endl<<"2.El tiempo"<<endl<<"3.Los suenos"<<endl;
	
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Como lo has descubierto se supone que debia ser una incognita para ti"<<endl;
		cout<<"La esfinge enfurece tanto que se lanza al mar y se ahoga"<<endl;
		cout<<"La puerta que anteriormente estaba cerrada ahora se abre para que puedas salir de la habitacion"<<endl;
		cout<<"Tambien se deja ver un objeto que se encontraba detras de la esfinge"<<endl;
		cout<<"Es el matillo de mjolnir el cual sera portado por una persona digna de el"<<endl;
		cout<<"Ves como sale volando el martillo hacia ti y lo tomas en tu mano"<<endl;
		cout<<"Aparentemente no realiza ningun efecto en ti y no logras safarte de el"<<endl;
		cout<<"Tendras que permanecer con el apartir de ahora"<<endl;
		
		count5=1;
		mjolnir=1;
		pasilloCiclope(p,c,b,m,o);
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te has equivocado"<<endl;
		cout<<"Te queda solo una opurtunidad"<<endl;
			do{
		cout<<"Selecciona: "<<endl<<"1.Los recuerdos"<<endl<<"2.El tiempo"<<endl<<"3.Los suenos"<<endl;
	
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Como lo has descubierto se supone que debia ser una incognita para ti"<<endl;
		cout<<"La esfinge enfurece tanto que se lanza al mar y se ahoga"<<endl;
		cout<<"La puerta que anteriormente estaba cerrada ahora se abre para que puedas salir de la habitacion"<<endl;
		cout<<"Tambien se deja ver un objeto que se encontraba detras de la esfinge"<<endl;
		cout<<"Es el matillo de mjolnir el cual sera portado por una persona digna de el"<<endl;
		cout<<"Ves como sale volando el martillo hacia ti y lo tomas en tu mano"<<endl;
		cout<<"Aparentemente no realiza ningun efecto en ti y no logras safarte de el"<<endl;
		cout<<"Tendras que permanecer con el apartir de ahora"<<endl;
	
		count5=1;
		mjolnir=1;
		pasilloCiclope(p,c,b,m,o);
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te has equivocado"<<endl;
		cout<<"Esta ha sido tu ultima oportunidad"<<endl;
		cout<<"Has sido devorado por la esfinge, tus puntos de vida han llegado a 0"<<endl;
		cout<<"Has perdido"<<endl;
		exit(0);
		
		contador3=1;
	
	 
		}else if(seleccion==3){
			system("CLS");
		cout<<"Te has equivocado"<<endl;
		cout<<"Esta ha sido tu ultima oportunidad"<<endl;
		cout<<"Has sido devorado por la esfinge, tus puntos de vida han llegado a 0"<<endl;
		cout<<"Has perdido"<<endl;
			exit(0);
		}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	}while(contador3!=1);
	 
		}else if(seleccion==3){
			system("CLS");
			cout<<"Te has equivocado"<<endl;
		cout<<"Te queda solo una opurtunidad"<<endl;
			do{
		cout<<"Selecciona: "<<endl<<"1.Los recuerdos"<<endl<<"2.El tiempo"<<endl<<"3.Los suenos"<<endl;
	
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Como lo has descubierto se supone que debia ser una incognita para ti"<<endl;
		cout<<"La esfinge enfurece tanto que se lanza al mar y se ahoga"<<endl;
		cout<<"La puerta que anteriormente estaba cerrada ahora se abre para que puedas salir de la habitacion"<<endl;
		cout<<"Tambien se deja ver un objeto que se encontraba detras de la esfinge"<<endl;
		cout<<"Es el matillo de mjolnir el cual sera portado por una persona digna de el"<<endl;
		cout<<"Ves como sale volando el martillo hacia ti y lo tomas en tu mano"<<endl;
		cout<<"Aparentemente no realiza ningun efecto en ti y no logras safarte de el"<<endl;
		cout<<"Tendras que permanecer con el apartir de ahora"<<endl;
	
		count5=1;
		mjolnir=1;
		pasilloCiclope(p,c,b,m,o);
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te has equivocado"<<endl;
		cout<<"Esta ha sido tu ultima oportunidad"<<endl;
		cout<<"Has sido devorado por la esfinge, tus puntos de vida han llegado a 0"<<endl;
		cout<<"Has perdido"<<endl;
		exit(0);
		
		contador3=1;
	
	 
		}else if(seleccion==3){
			system("CLS");
		cout<<"Te has equivocado"<<endl;
		cout<<"Esta ha sido tu ultima oportunidad"<<endl;
		cout<<"Has sido devorado por la esfinge, tus puntos de vida han llegado a 0"<<endl;
		cout<<"Has perdido"<<endl;
			exit(0);
		}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	}while(contador3!=1);
			
		}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	}while(contador3!=1);
}else{
	cout<<"Tienes una oportunidad, si no aciertas te comere"<<endl;
		cout<<"Si aciertas te dejare salir y ademas te dare un objeto necesario para que culmines tu aventura"<<endl;
		do{
		cout<<"Selecciona: "<<endl<<"1.Los recuerdos"<<endl<<"2.El tiempo"<<endl<<"3.Los suenos"<<endl;
	
		if(!(cin>>seleccion)){
		cin.clear();
		cin.ignore(1000,'\n');}
		if(seleccion==1){
			system("CLS");
		cout<<"Como lo has descubierto se supone que debia ser una incognita para ti"<<endl;
		cout<<"La esfinge enfurece tanto que se lanza al mar y se ahoga"<<endl;
		cout<<"La puerta que anteriormente estaba cerrada ahora se abre para que puedas salir de la habitacion"<<endl;
		cout<<"Tambien se deja ver un objeto que se encontraba detras de la esfinge"<<endl;
		cout<<"Es el matillo de mjolnir el cual sera portado por una persona digna de el"<<endl;
		cout<<"Ves como sale volando el martillo hacia ti y lo tomas en tu mano"<<endl;
		cout<<"Aparentemente no realiza ningun efecto en ti y no logras safarte de el"<<endl;
		cout<<"Tendras que permanecer con el apartir de ahora"<<endl;
		
		count5=1;
		mjolnir=1;
		pasilloCiclope(p,c,b,m,o);
		contador3=1;
		
	}else if(seleccion==2){
		system("CLS");
		cout<<"Te has equivocado"<<endl;
		cout<<"Has sido devorador por la esfinge"<<endl;
		exit(0);
	}else if(seleccion==3){
		cout<<"Te has equivocado"<<endl;
		cout<<"Has sido devorador por la esfinge"<<endl;
		exit(0);
	}else{
		cout<<"Repita su seleccion"<<endl;
		contador3=0;
	}
	
}while(contador3!=1);
		
	}
}

}	
	





