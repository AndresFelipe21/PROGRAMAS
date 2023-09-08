#include <iostream>
using namespace std;

int mat1[3][3];
int f,c;

int main()
{
	for (f=0;f<=2;f++)
	{
		for (c=0;c<=2;c++)
		{
			cout<<"Ingrese los valores ["<<f<<"]["<<c<<"]"<<endl;
			cin>>mat1[f][c];
		}
	}
	system("cls");
	for (f=0;f<=2;f++)
	{
		for (c=0;c<=2;c++)
		{
			cout<<mat1[f][c]<<"\t";
		}
		cout<<endl;
	}
}
