#include <iostream>
using namespace std;

int op, op2, op3, op4;

//	Funciones de conversión
void celsiusaFahrenheit(float celsius, float *fahrenheit) {
    *fahrenheit = celsius * 9 / 5 + 32;
}

void fahrenheitaCelsius(float fahrenheit, float *celsius) {
    *celsius = (fahrenheit - 32) * 5 / 9;
}

void celsiusaKelvin(float celsius, float *kelvin) {
    *kelvin = celsius + 273.15;
}

void kelvinaCelsius(float kelvin, float *celsius) {
    *celsius = kelvin - 273.15;
}

void fahrenheitaKelvin(float fahrenheit, float *kelvin) {
    float celsius;
    fahrenheitaCelsius(fahrenheit, &celsius);
    celsiusaKelvin(celsius, kelvin);
}

void kelvinaFahrenheit(float kelvin, float *fahrenheit) {
    float celsius;
    kelvinaCelsius(kelvin, &celsius);
    celsiusaFahrenheit(celsius, fahrenheit);
}

//	 Funciones de Sub-Menu 
int menu1(){
	bool mseguir = true;
	float Temperatura, resultadoTemperatura;
	do{
		cout<<"---Celsius y Farhrenheit---"<<endl;
		cout<<"1. Resultado en Celsius."<<endl;
		cout<<"2. Resultado en Fahrenheit"<<endl;
		cout<<"3. Regresar al Menu Principal"<<endl;
		cin>>op2;
		
		switch(op2)
		{
			case 1:
				system("cls");
				cout << "Ingrese la temperatura en Celsius: ";
				cin >> Temperatura;
				celsiusaFahrenheit(Temperatura, &resultadoTemperatura);
				cout << "Temperatura en Fahrenheit: " << resultadoTemperatura << endl;
			break;
			
			case 2:
				system("cls");
				cout << "Ingrese la temperatura en Fahrenheit: ";
				cin >> Temperatura;
				fahrenheitaCelsius(Temperatura, &resultadoTemperatura);
				cout << "Temperatura en Celsius: " << resultadoTemperatura <<endl;
				system("pause");
			break;
			
			case 3:
				system("cls");
				mseguir=false;
			break;
		}
	}while(mseguir==true);
}

int menu2(){
	bool mseguir = true;
	float Temperatura, resultadoTemperatura;
	do{
		cout<<"---Celsius y Kelvin"<<endl;
		cout<<"1. Resultado en Celsius."<<endl;
		cout<<"2. Resultado en Kelvin"<<endl;
		cout<<"3. Regresar al Menu Principal."<<endl;
		cin>>op3;
		
		switch(op3)
		{
			case 1:
				system("cls");
				cout << "Ingrese la temperatura en Kelvin: ";
                cin >> Temperatura;
                kelvinaCelsius(Temperatura, &resultadoTemperatura);
                cout << "Temperatura en Celsius: " << resultadoTemperatura<<endl;
			break;
				
			case 2:
				system("cls");
				cout << "Ingrese la temperatura en Celsius: ";
                cin >> Temperatura;
                celsiusaKelvin(Temperatura, &resultadoTemperatura);
                cout << "Temperatura en Kelvin: " << resultadoTemperatura << endl;
                system("pause");
            break;
            
            case 3:
            	system("cls");
            	mseguir=false;
            break;
		}
		
	}while(mseguir==true);
}

int menu3(){
	bool mseguir = true;
	float Temperatura, resultadoTemperatura;
	do{
		cout<<"---Fahrenheit y Kelvin---"<<endl;
		cout<<"1. Resultado en Fahrenheit."<<endl;
		cout<<"2. Resultado en Kelvin."<<endl;
		cout<<"3. Regresar al Menu Principal."<<endl;
		cin>>op4;
		
		switch(op4)
		{
			case 1:
				system("cls");
				cout << "Ingrese la temperatura en Kelvin: ";
                cin >> Temperatura;
                kelvinaFahrenheit(Temperatura, &resultadoTemperatura);
                cout << "Temperatura en Fahrenheit: " << resultadoTemperatura <<endl;
            break;
				
			case 2:
				system("cls");
				cout << "Ingrese la temperatura en Fahrenheit: ";
                cin >> Temperatura;
                fahrenheitaKelvin(Temperatura, &resultadoTemperatura);
                cout << "Temperatura en Kelvin: " << resultadoTemperatura <<endl;
                system("pause");
            break;
            
            case 3:
            	system("cls");
            	mseguir=false;
            break;
		}
		
	}while(mseguir==true);
}

//	Incio de Programa
int main() {
	
	bool mseguir = true;
    float Temperatura, resultadoTemperatura;
    do {
        cout<<"---Conversiones de Temperartura---"<<endl;
        cout<<"1. Celsius y Fahrenheit"<<endl;
        cout<<"2. Celsius y Kelvin"<<endl;
        cout<<"3. Fahrenheit y Kelvin"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Indique una opcion"<<endl;
        cin>>op;

        switch (op) {
            case 1:
            	system("cls");
                menu1();
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
            	system("cls");
                mseguir=false;
            break;
        }

    } while (mseguir==true);

    return 0;
}
