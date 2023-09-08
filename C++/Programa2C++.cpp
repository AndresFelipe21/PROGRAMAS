#include <iostream>
using namespace std;

int mat1[3][3];
int f,c,op;
bool mseguir=true;

int main()
{
	do{
	
	cout<<"Menu Principal"<<endl;
	cout<<"1. Cargar"<<endl;
	cout<<"2. Mostrar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Ingrese una opcion"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			for (f=0;f<=2;f++)
			{
				for (c=0;c<=2;c++)
				{
					system("cls");
					cout<<"Ingrese el elemento ["<<f<<"]["<<c<<"]"<<endl;
					cin>>mat1[f][c];
				}
			}
			break;
		
		case 2:
			system("cls");
			for (f=0;f<=2;f++)
			{
				for (c=0;c<=2;c++)
				{
					cout<<mat1[f][c]<<"\t";
				}
				cout<<endl;
			}
			system("pause");
			break;
		
		case 3:
			mseguir=false;
			break;
	}
}while(mseguir==true);
}
