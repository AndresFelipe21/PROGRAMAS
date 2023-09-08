#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;



int f, c, score=50, intentos=3, nFantasmas=0;
string passwordGuardada="123", password;

string m1[6][6];
string m2[6][6];

void generarMatrices(){		//Se generara un juego aleatorio y a su vez la matriz espejo.
	for(int j=0;j<=5;j++){	//Se itera y se va cambiando de fila.
		for(int i=0;i<=5;i++){	//Se itera y se va cambiando de columna.
			if(nFantasmas<=5){	//Se crea una condicion, debido a que solo va a tener 5 fantasmas el juego.
				int random = rand()%2;	//Esto genera un numero, si es par o impar votara '0' y '1' aleatoriamente.
				if(random==0){			//Si es 0 se guardara como 'V'.
					m1[j][i]="v";
				}else{					//Si es 1 se guardara como 'F' que es un fantasma.
					m1[j][i]="f";
					nFantasmas++;		//Se suma el contador de fantasmas.
				}
			}else{
				m1[j][i]="v";	//Si se llega al limite de fantasmas, todo lo siguiente sera 'V'.
			}
		}
	}
	for(int j=0;j<=5;j++){
		for(int i=0;i<=5;i++){	//Se llena la matriz espejo de incognitas "X".
			m2[j][i]="x";
		}
	}
}

void mostrarMatriz(int opcion){		//Esta funcion tiene como obejtivo mostrar cualquier matriz por medio de una opcion

	if(opcion==1){	//matriz parametrizada
	
		cout<<"\t0\t1\t2\t3\t4\t5\t"<<endl;
		cout<<"\t_\t_\t_\t_\t_\t_"<<endl<<endl;
		
		for(int j=0;j<=5;j++){
			cout<<j<<" |"<<"\t";
			for(int i=0;i<=5;i++){
				cout<<m1[j][i]<<"\t";
			}
			cout<<endl<<endl;
		}
	}else if(opcion==2){	//matriz espejo
	
		cout<<"\t0\t1\t2\t3\t4\t5\t"<<endl;
		cout<<"\t_\t_\t_\t_\t_\t_"<<endl<<endl;
		
		for(int j=0;j<=5;j++){
			cout<<j<<" |"<<"\t";
			for(int i=0;i<=5;i++){
				cout<<m2[j][i]<<"\t";	//Se crean dos ciclos for para mostrar columnas y filas.
			}
			cout<<endl<<endl;
		}
	}
}

bool validarPosicion(int f, int c){		//Tiene como objetivo el validar la posicion ingresada por el usuario.

	if(m2[f][c]=="V"){				//Se valida si ya habia ingresado la misma posicion mirando la matriz espejo con la posicion ingresada.
		score-=5;
		return false;
	}
	else if(m2[f][c]=="F"){
		score-=5;
		return true;
	}
	else if(m1[f][c]=="f"){			//Se resta al score y a los intentos, debido a que era un fantasma, y viseversa con la otra opcion.
		score-=5;
		intentos-=1;
		return true;
	}
	else{
		score+=3;
		return false;
	}
}

void searchGhost(int f, int c){		//Se realizaran los cambios en la matriz espejo, si se encontro un Fantasma o no.
	if(validarPosicion(f,c)){		//Para poder ingresar en este if, llamamos la funcion 'validarPosicion' la cual arroja un booleano.
		m2[f][c] = "F";				//Si la validacion sale que fue un fantasma, saldra true, e ingresara a la primera opcion y viseversa.
	}
	else{
		m2[f][c] = "V";
	}
}

bool mostrarMatrizPara(string contrasena){		//Aqui es donde se verificara y se mostrara la matriz parametrizada.
	if(contrasena==passwordGuardada){			//Para ingresar al if, se valida la contrasena con la funcion 'validarContrasena'.
		system("cls");
		mostrarMatriz(1);
		system("pause");
		return false;
	}else{
		system("cls");
		cout<<"---|Contraseña Invalida|---"<<endl; //En dado caso que se incorrecta, mostrara este error.
		return true;
	}
}

void reinicio(){	//A la hora de haber ganado o perdido, se reiniciaran score e intentos.
	score=50;
	intentos=3;
	nFantasmas=0;
	generarMatrices(); //Se genera un nuevo juego.
}

bool validarJuego(){	//Se validara el juego sobre las distintas formas en las que se puede acabar el mismo.
	if(score>=60){		//Alcanzo el puntaje para ganar.
		system("cls");
		cout<<"------------|!GANASTE!|----------------"<<endl;
		reinicio();
		system("pause");
		return true;
	}
	else if(intentos==0){	//Gasta todos los intentos, por haber encontrado 3 fantasmas.
		system("cls");
		cout<<"--------|PERDIO POR !!!!MALO!!!|------------"<<endl;
		reinicio();
		system("pause");
		return true;
	}
	return false;
}

int validarOpcion(int opciones){	//Se verifica la opcion ingresada, para evitar errores.
	bool flag=true;
	int opcion;
	do{
		cout<<endl<<"Eleccion: ";
		cin>>opcion;
		if(opcion>0 && opcion<=opciones){
			return opcion;
			flag=false;
		}else{
			cout<<"Eleccion invalida"<<endl;
		}
	}while(flag);
}

int vFilaColum(int eleccion){ //Se verificara si existe la fila o columna que ingrese el usuario.
	bool flag=true;
	int opcion;
	if(eleccion==1){		//La eleccion 1, es para verificar si en realidad existe esa posicion en la fila.
		do{
			cout<<endl<<"|Fila| : ";
			cin>>opcion;
			if(opcion>=0 && opcion<6){
				return opcion;
				flag=false;
			}else{
				cout<<"Eleccion invalida"<<endl;
			}
		}while(flag);
	}else{					//La eleccion 2, es para verificar si en realidad existe esa posicion en las columnas.
		do{
			cout<<endl<<"|Columna| : ";
			cin>>opcion;
			if(opcion>=0 && opcion<6){
				return opcion;
				flag=false;
			}else{
				cout<<"Eleccion invalida"<<endl;
			}
		}while(flag);
	}
}

bool menu2(){	//Menu para salir en cualquier momento del juego
	string opcion;
	cout<<"\n"<<"Continuar (Si/No): ";
	cin>>opcion;
	if(opcion=="si"||opcion=="Si"||opcion=="SI"){
		return true;
	}else if(opcion=="no"||opcion=="No"||opcion=="NO"){
		return false;
	}else{
		cout<<"--------|Opcion invalida|--------"<<endl;
		system("pause");
		return false;
	}
}

int menu(){		//Se mostrara un menu y se pedira la opcion del usuario.
	system("cls");
	int opcion;
	cout<<"-----|Encuentra el Fantasma|-----"<<endl;
	cout<<"1.Jugar"<<endl;
	cout<<"2.Ver matriz paremetrizada"<<endl<<endl;
	opcion = validarOpcion(2);		//Se llama la funcion validacion, para que la opcion ingresada cumpla los parametros.
	return opcion;
}

void interfaz(){
	system("cls");
	cout<<"\tScore: "<<score<<"\t\t\tIntentos: "<<intentos<<endl;
	cout<<"\t-------------------------------------------\n\n\n";
	mostrarMatriz(2);
	cout<<endl;
}


int main(){
	setlocale(LC_ALL, "");	//Permite el mostrar caracteres especiales.
	generarMatrices();
	bool flag=true;
	
	do{
		switch(menu()){	//la funcion menu, arrojara un 'int' el cual se validara con el 'Switch'.
			case 1:
				while(!validarJuego()){	//Se valida el juego si ha ganado o perdido.
					interfaz();
					f=vFilaColum(1);
					c=vFilaColum(2);
					searchGhost(f,c);
					if(!menu2()){
						break;
					}
				}
				break;
			case 2:
				while(flag){
					system("cls");
					cout<<"Contraseña: ";
					cin>>password;
					flag=mostrarMatrizPara(password);
					if(flag){
						if(!menu2()){
							break;
						}
					}
				}
				flag=true;
				break;
		}
	}while(flag);
}
