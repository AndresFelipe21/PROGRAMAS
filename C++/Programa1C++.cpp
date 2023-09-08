//Habilitacion de librerias necesarias
#include <iostream>
using namespace std;

//Variables de programa
int a,b,c;

//Creacion del programa
int main()
{
	cout<<"Ingrese un primer valor"<<endl;  //Cout: sirve para imprimir 
	cin>>a;                                //Cin: Captura los valores que el usuario ingresa
	
	cout<<"Ingrese un segundo valor"<<endl;
	cin>>b;
	
	system("cls");                          //Borra la pantalla despues de que el usuario agrega los valores
	c=a+b;
	
	cout<<"Resultado: "<<endl<<c<<endl;
}

