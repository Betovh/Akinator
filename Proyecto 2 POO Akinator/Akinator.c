#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct  nodo{
	int value;
	char pregunta[70];
	struct nodo*izq;
	struct nodo*der;	
}nodo;



nodo*insert(nodo*, int, char[]);
void run(nodo*);

void run(nodo*raiz){
	
int opc;



if(raiz==NULL)
printf("\n");
while(raiz!=NULL){// Mientras la raíz no esté vacía ir lanzando preguntas a la derecha o izquierda si están vacías
	
	if(raiz->izq==NULL&& raiz->der==NULL){
		printf("%s", raiz->pregunta);// Lanza respuesta
		break;
	}
	
	
	printf("\n%s",raiz->pregunta);// Lanza pregunta

	scanf("%d",&opc);// Ingresamos la opcion
	
	if(opc==1){
		if(raiz->izq!=NULL)
		raiz=raiz->izq;
	}
	
	if(opc==2){
		if(raiz->der!=NULL)
		raiz=raiz->der;
	}	
}



}

void menu (){


	printf("\t\tAkinator de la Liga MX\n\n");
	printf("\t\tPiensa en un equipo\n\n");
	printf("\t\tAtlas \t\t\t America\n");
	printf("\t\tCruz Azul \t\t Leon\n");
	printf("\t\tSan Luis \t\t Necaxa\n");
	printf("\t\tGuadalajara \t\t Queretaro\n");
	printf("\t\tSan Luis \t\t Necaxa\n");
	printf("\t\tMonterrey \t\t Tigres\n");
	printf("\t\tTijuana \t\t Juarez\n");
	printf("\t\tMazatlan \t\t Pachuca\n");
	printf("\t\tPumas \t\t\t Toluca\n\n");
	printf("\t\tIngresa 1.Si 2.No\n");
	
	nodo*qs=NULL;
	qs=insert(qs,2000,"\t\tTu equipo radica en el NORTE de Mexico?: ");
	qs=insert(qs,1500,"\t\tTu equipo tiene titulos de liga?: ");
	qs=insert(qs,1750,"\t\tTu equipo juega en una ciudad fronteriza?: ");
	qs=insert(qs,1600,"\n\t\tPiensas en FC Juarez\n\n");
	qs=insert(qs,1960,"\n\t\tPiensas en Mazatlan FC\n\n");
	
	qs=insert(qs,1200,"\t\tTu equipo tiene mas de 4 titulos de liga?: ");
	qs=insert(qs,1250,"\t\tTu equipo tiene solo un titulo de liga?: ");
	qs=insert(qs,1240,"\n\t\tPiensas en Club Tijuana\n\n");
	qs=insert(qs,1100,"\t\tTu equipo juega en la ciudad de la carnita asada?: ");
	qs=insert(qs,1120,"\n\t\tPiensas en Club Santos Laguna\n\n");
	qs=insert(qs,1000,"\t\tTu equipo juega en el estadio BBVA?: ");
	qs=insert(qs,900,"\n\t\tPiensas en Club de Futbol Monterrey\n\n");
	qs=insert(qs,1005,"\n\t\tPiensas en Tigres UANL\n\n");
	
	
	qs=insert(qs,8000,"\t\tTu equipo radica en el CENTRO de Mexico?: ");
	qs=insert(qs,4900,"\t\tTu equipo tiene mas de 8 titulos de liga?: ");
	qs=insert(qs,4800,"\t\tTu equipo juega en la CDMX?: ");
	qs=insert(qs,4700,"\t\tTu equipo juega en el Estadio Azteca?: ");
	qs=insert(qs,4600,"\t\tEl uniforme de local de tu equipo es color azul?: ");
	qs=insert(qs,4500,"\n\t\tPiensas en Club de Futbol Cruz Azul\n\n");
	qs=insert(qs,4610,"\n\t\tPiensas en Club America\n\n");
	qs=insert(qs,4850,"\t\tTu equipo juega en la tierra del mariachi?: ");
	qs=insert(qs,4840,"\n\t\tPiensas en Club Deportivo Guadalajara\n\n");
	qs=insert(qs,4860,"\n\t\tPiensas en Toluca FC\n\n");
	qs=insert(qs,6000,"\t\tTu equipo tiene titulos de liga?: ");
	qs=insert(qs,5900,"\t\tTu equipo tiene mas de 5 titulos de liga?: ");
	qs=insert(qs,5800,"\t\tTu equipo tiene mas de 100 anios de existencia?: ");
	qs=insert(qs,5600,"\n\t\tPiensas en Club de Futbol Pachuca\n\n");
	qs=insert(qs,5850,"\t\tTu equipo se relaciona con alguna universidad?: ");
	qs=insert(qs,5840,"\n\t\tPiensas en los Pumas de la UNAM\n\n");
	qs=insert(qs,5860,"\n\t\tPiensas en el Club Leon\n\n");
	
	
	qs=insert(qs,5990,"\t\tTu equipo tiene entre 2 y 3 titulos de liga?: ");
	qs=insert(qs,5980,"\t\tTu equipo tiene 3 titulos de liga?: ");
	qs=insert(qs,5970,"\t\tTu equipo su primer titulo de liga en 1951?: ");
	qs=insert(qs,5960,"\n\t\tPiensas en el ATLAS FC\n\n");
	qs=insert(qs,5985,"\t\t\nPiensas en Puebla FC\n\n");
	qs=insert(qs,5975,"\t\t\nPiensas en Club Necaxa\n\n");
	
	qs=insert(qs,7000,"\t\tRonaldinho jugo en tu equipo?: ");
	qs=insert(qs,6900,"\t\t\nPiensas en Queretaro FC\n\n");
	qs=insert(qs,7100,"\n\t\tPiensas en Club Atletico de San Luis\n\n");
	
	
	run(qs);		


	
	int opcion=0;
do{
	system("pause");
	system("cls");
	printf("\n\n\n\t\tQuieres volver a jugar?");
	printf("\n\n\t\t1.Si. 2.No Terminar Juego\n");
	printf("\n\n\t\tIngresa Opcion: ");
	scanf("%d",&opcion);
		
		
	if(opcion==1){
		system("cls");
		run(qs);
		
	}
	else{	
	}	
}while(opcion!= 2);printf("\n\n\t\tAKINATOR DE LA LIGA MX FUERA \n");
	
}

int main(){
	menu();
	}

nodo*insert(nodo*raiz, int value, char pregunta[]){

nodo*nuevo, *aux,*anterior;

nuevo=(nodo*)malloc(sizeof(nodo));

if(nuevo!=NULL){
	nuevo->value=value;
	
	strcpy(nuevo->pregunta,pregunta);
	nuevo->izq=NULL;
	nuevo->der=NULL;
	
	if(raiz==NULL){
		raiz=nuevo;
	}
	else{
		
		aux=raiz;
		anterior=NULL;
		while(aux!=NULL){
			anterior=aux;
			if(value<aux->value)
			aux =aux->izq;
			else if(value>aux->value)
			aux=aux->der;
			else{
				return raiz;
			}
			}
			if(value<anterior->value)
			anterior->izq=nuevo;
			else
			anterior->der=nuevo;
	}
}

else{
	
}
return raiz;
}
