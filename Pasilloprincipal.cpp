#include "Pasilloprincipal.h"
using namespace std;
             Pasilloprincipal::Pasilloprincipal(){
			 }
		void Pasilloprincipal::primeradescripcion(){
			int contador=0;
			cout<<"Muy bien, acabas de adentrarte en el laberinto en busca de la fama y la gloria que podrias obtener al vencer al minotauro"<<endl;
			cout<<"Sin embargo esto no sera una tarea facil, tendras que vencer a varias criaturas para llegar hasta tu objetivo"<<endl;
			cout<<"Selecciona: "<<endl<<"1.Para continuar"<<endl<<"2.Para regresar"<<endl;
				do{
			if(!(cin>>this->continuar)){
				
				cin.clear();
				cin.ignore(1000,'\n');}
			if(continuar==1){
				contador=1;
			} else if(continuar==2){
				cout<<"Jaja ya de cerca parece que el laberinto es otra cosa"<<endl;
				exit(0);
				contador=1;
			} else{
				contador=0;
				cout<<"Repita su seleccion"<<endl;
			}
					
				
			}while(contador!=1);
				system("CLS");
		}
		int Pasilloprincipal::getcontinuar(){
			return this->continuar;
		}
			void Pasilloprincipal::primeraDecision(){
				cout<<"Continuamos nuestra aventura hasta que se acaba el corredor y nos topamos con nuestros primeros enemigos"<<endl;
				cout<<"Dos lobos que no parecen representar una gran amenaza"<<endl;
				cout<<"De esta manera comienza el primer combate"<<endl;
					
			}
			
		void Pasilloprincipal::segundaDecision(){
			cout<<"Parece que el laberinto es mucho para ti aventurero"<<endl;
			cout<<"Te diriges nuevamente a la puerta para huir del reto"<<endl;
			exit(0);
		}
		
		void Pasilloprincipal::segundadescripcion(){
			cout<<"Vuelves al lugar en el cual derrotaste a los lobos y tienes la oportunidad de elegir nuevamente a donde deseas ir"<<endl;
			cout<<"Selecciona:"<<endl<<"W.Para ir hacia el pasillo superior "<<endl<<"A.Para ir al pasillo de la izquierda "<<endl<<"D.Para ir al pasillo de la derecha"<<"S.Para salir de laberinto"<<endl;
		}