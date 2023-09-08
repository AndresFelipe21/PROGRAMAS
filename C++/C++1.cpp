#include <iostream>
using namespace std;

int vector1[10];
int i;

int main()
{
	for (i=0;i<=9;i++)
	{
		cout<<"Ingrese el elemento ["<<i<<"]"<<endl;
		cin>>vector1[i];
	}
	
	system("cls");
	
	for (i=0;i<=9;i++)
	{
		cout<<vector1[i]<<"\t";
	}
}

