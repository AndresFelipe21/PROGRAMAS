#include <iostream>
using namespace std;

int op, op2, op3, op4;
int vector1[10], i, vectorsize;
int vector2[5], a, vectorsize2;
int vector3[10], b, vectorsize3;

//	Funciones de operaciones
void valores()
{
	for (i=0;i<=9;i++){
		cout<<"Ingrese los valores "<<i+1<< endl;
		cin>>vector1[i];
		system("cls");
	}
	
	cout<<"Estos son tus valores"<<endl;
	for (i=0;i<=9;i++){
		cout<<vector1[i]<<"\n"<<endl;
	}
}

int suma()
{
	int sum=0;
	for(i=0;i<vectorsize;i++){
		sum= sum+vector1[i];
	}
	
	cout<<"La suma de los valores es: "<<sum<<endl;
}

int resta()
{
	double res=vector1[0];
	for(i=0;i<vectorsize;i++){
		res = res-vector1[i];
	}
	
	cout<<"La resta de los valores es: "<<res<<endl;
}

int multiplicacion(){
	int mult=1;
	for(i=0;i<vectorsize;i++){
		mult= mult*vector1[i];
	}
	
	cout<<"La multiplicacion de los valores es: "<<mult<<endl;
}

int division()
{
	float div=1.0;
	for(i=0;i<vectorsize;i++){
		div= div/vector1[i];
	}
	
	cout<<"La division de los valores es: "<<div<<endl;
}

//	Funciones de Promedio
void valores2()
{
    for (int b = 0; b <= 9; b++) {
        cout << "Ingrese los valores " << b + 1 << endl;
        cin >> vector3[b];
        system("cls");
    }

    cout << "Estos son tus valores" << endl;
    for (int b = 0; b <= 9; b++) {
        cout << vector3[b] << "\n" << endl;
    }
}

suma2()
{
	int sum=0;
	for(b=0;b<vectorsize3;b++){
		sum=sum+vector3[b];
	}
	return sum;
	
	cout<<"La suma de los valores es: "<<sum<<endl;
}

float promedio()
{
    int sum = suma2();
    float prom = static_cast<float>(sum) / vectorsize3; 
    cout << "El promedio de los valores es: " << prom << endl;
}

//	Funcion de Notas
void notas()
{
	for(a=0;a<=4;a++){
		cout<<"Ingrese la nota del estudiante "<<a+1<<endl;
		cin>>vector2[a];
		system("cls");
	}
	
	cout<<"Estas son las notas ingresadas"<<endl;
	for(a=0;a<=4;a++){
		cout<<vector2[a]<<"\n"<<endl;
	}	
}	

int rendimiento()
{
	int deficientes=0, regulares=0, buenos=0, excelentes=0;
	for(a=0;a<=4;a++){
		if(vector2[a]<=0&&vector2[a]<=5){
			deficientes++;
		}
		else if(vector2[a]<=6&&vector2[a]<=10){
			regulares++;
		}
		else if(vector2[a]<=11&&vector2[a]<=15){
			buenos++;
		}
		else if(vector2[a]<=16&&vector2[a]<=20){
			excelentes++;
		}
	}
	
	cout<<">>>CLASIFICACION<<<"<<endl;
	cout<<"Deficentes: "<<deficientes<<" Estudiantes"<<endl;
	cout<<"Regulares: "<<regulares<<" Estudiantes"<<endl;
	cout<<"Buenos: "<<buenos<<" Estudiantes"<<endl;
	cout<<"Excelentes: "<<excelentes<<" Estudiantes"<<endl;
}

//	Funcion de Sub-Menu
int menu1()
{
	bool mseguir=true;
	do{
		cout<<"---Operaciones---"<<endl;
		cout<<"1. Carga de Valores."<<endl;
		cout<<"2. Suma de Valores."<<endl;
		cout<<"3. Resta de Valores."<<endl;
		cout<<"4. Multiplicacion de Valores."<<endl;
		cout<<"5. Division de Valores."<<endl;
		cout<<"6. Regresar a Menu Principal."<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>op2;
					
		switch(op2)
		{
			case 1:
				system("cls");
				vectorsize=sizeof(vector1)/sizeof(vector1[0]);
				valores();
			break;
						
			case 2:
				system("cls");
				suma();
				system("pause");
			break;
						
			case 3:
				system("cls");
				resta();
				system("pause");
			break;
						
			case 4:
				system("cls");
				multiplicacion();
				system("pause");
			break;
						
			case 5:
				system("cls");
				division();
				system("pause");
			break;
						
			case 6:
				system("cls");
				mseguir=false;
			break;
		}		
	}while(mseguir==true);
}

int menu2()
{
	bool mseguir=true;
		do{
		cout<<"---Promedio de Valores---"<<endl;
		cout<<"1. Carga de Valores."<<endl;
		cout<<"2. Promedio de los Valores."<<endl;
		cout<<"3. Regresar al Menu Principal."<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>op4;
		
		switch(op4)
		{
			case 1:
				system("cls");
				vectorsize3=sizeof(vector3)/sizeof(vector3[0]);
				valores2();
			break;
			
			case 2:
				system("cls");
				promedio();
				system("pause");
			break;
			
			case 3:
				system("cls");
				mseguir=false;
			break;
		}
	}while(mseguir==true);
}

int menu3()
{
	bool mseguir=true;
	do{
		cout<<"---Notas---"<<endl;
		cout<<"1. Ingreso de Notas."<<endl;
		cout<<"2. Clasificacion de Rendimiento."<<endl;
		cout<<"3. Regresar al Menu Principal."<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>op3;
		
		switch(op3)
		{
			case 1:
				system("cls");
				vectorsize2=sizeof(vector2)/sizeof(vector2[0]);
				notas();
			break;
			
			case 2:
				system("cls");
				rendimiento();
				system("pause");
			break;
			
			case 3:
				system("cls");
				mseguir=false;
			break;
		}
		
	}while(mseguir==true);
}

//	Inicio de programa
int main(){
	
	bool mseguir=true;
	do{
		cout<<"---Menu Principal---"<<endl;
		cout<<"1. Opercaiones."<<endl;
		cout<<"2. Promedio."<<endl;
		cout<<"3. Notas"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>op;
	
		switch(op)
		{
			case 1:
				system("cls");
				menu1();
				system("pause");
			break;
			
			case 2:
				system("cls");
				menu2();
				system("pause");
			break;
			
			case 3:
				system("cls");
				menu3();
				system("pause");
			break;
				
			case 4:
				mseguir=false;
			break;
		}
	}while(mseguir==true);	
	
}

