#include <iostream>
#include <fstream>
using namespace std;

int op, numero, i;
ofstream asalida;
ifstream alectura;
string datoleido;
bool mseguir=true;

int main ()
{
	asalida.open("septiembre05.txt");
	do{
		system("cls");
		cout<<"---Menu Principal Archivos---"<<endl;
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. Recuperar Datos"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1:
				for (i=1;i<=5;i++)
				{
					system("cls");
					cout<<"Ingrese cifra de 3 digitos"<<endl;
					cin>>numero;
					if (i!=5)
					{
						asalida<<numero<<endl;	
					}
					else 
					{
						asalida<<numero;
					}
				}
				asalida.close();
			break;	
				
			case 2:
				system("cls");
				alectura.open("septiembre05.txt");
				while (!alectura.eof())
				{
					alectura>>datoleido;
					cout<<"El dato recuperado es: "<<datoleido<<endl;
				}
				system("pause");
				alectura.close();
			break;
				
			case 3:
				mseguir=false;
			break;
		}
		
	}while(mseguir==true);
}
