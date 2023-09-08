#include <iostream>
using namespace std;

double vectorPila[10], nVector=0;


bool empty(){
	for(int i=0; i<10; i++){
		if(vectorPila[i]!=0){
			return false;
			break;
		}else{
			return true;
		}
	}
}

void size(){
	int contador = 0;
	if(empty()){
		system("cls");
		cout<<endl<<"La pila no contiene ningun valor"<<endl;
		cout<<endl;
		system("pause");
	}else{
		for(int i=0; i<10; i++){
			if(vectorPila[i]!=0){			//diferente de 0 es para hallar el tamano
				contador++; 
			}
		}
		system("cls");
		cout<<endl<<"La pila tiene un tamano de: "<<contador<<endl;
		cout<<endl;
		system("pause");
	}
}

void pop(){
	double uvalor;
	if(empty()){
		system("cls");
		cout<<endl<<"La pila no contiene ningun valor"<<endl;
		cout<<endl;
		system("pause");
	}else{
		for(int i=0;i<10;i++){
			if(vectorPila[i]==0){
				uvalor = vectorPila[i-1];
				vectorPila[i-1]=0;
				break;
			}
		}
		system("cls");
		cout<<"Se elimino el "<<uvalor<<" exitosamente"<<endl;
		system("pause");
	}
}

void top(){
	double topValor;
	if(empty()){
		system("cls");
		cout<<endl<<"La pila no contiene ningun valor"<<endl;
		cout<<endl;
		system("pause");
	}else{
		for(int i=0;i<10;i++){
			if(vectorPila[i]==0){
				topValor = vectorPila[i-1];
				break;
			}
		}
		system("cls");
		cout<<"El ultimo dijito es "<<topValor<<endl;
		system("pause");
	}
}

void push(double num){
	for(int i=0; i<10; i++){
		if(vectorPila[i]==0){
			vectorPila[i]=num;
			break;
		}
	}
}

double obtenerValor(){
	double num=0;
	if(nVector<10){
		system("cls");
		cout<<"Ingrese el valor: ";
		cin>>num;
		nVector++;
		return num;
	}else{
		system("cls");
		cout<<"No es posible seguir ingresando"<<endl;
		system("pause");
	}
	
}

int menu(){
	int opcion;
	system("cls");
	cout<<"---Menu Principal---"<<endl;
	cout<<"1. Push"<<endl;
	cout<<"2. Size"<<endl;
	cout<<"3. Pop"<<endl;
	cout<<"4. Top"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<endl<<"Opcion: ";
	cin>>opcion;
	return opcion;
}

int main (){
	bool flag = true;
	do{
		switch(menu()){
			case 1:
				push(obtenerValor());
				break;
			case 2:
				size();
				break;
			case 3:
				pop();
				break;
			case 4:
				top();
				break;
			case 5:
				flag=false;
				break;
		}
	}while(flag==true);
}
