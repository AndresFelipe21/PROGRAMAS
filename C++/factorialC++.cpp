#include <iostream>
using namespace std;

int factorial=1, numero, n;

int main()
{
	cout<<"Ingrese numero a calcular factorial"<<endl;
	cin>>numero;
	system("cls");
	cout<<numero<<"! = ";
	for (n=numero; n>=1; n--)
	{
		factorial=factorial*n;
		if (n!=1)
		{
			cout<<n<<" x ";	
		}
		else
		{
			cout<<n;
		}
	}
	cout<<" = "<<factorial;
}
