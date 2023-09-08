#include <iostream>
using namespace std;

int op;

//	Estructura de Clientes
struct clientes{
	int codigo_Cli;
	string nombre_Cli;
	string apellido_Cli;
	int cantidad_Fotos;
	int valorUnitario_Foto;
};

clientes lista_clientes []= {
    {1025,"Carlos","Fernandez",20,12500},
    {1020,"Oscar","Hidalgo",12,15000},
    {1130,"Juan","Peralta",10,17500},
    {1015,"Diana","Montoya",15,25000}
};

clientes clientes_eliminados;

//	Funciones de busqueda de clientes
void ClientesEnSistema(){
	    for (int i = 0; i < 4; i++) {
        cout << ">>> Cliente " << i + 1 << " <<<" << endl;
        cout<<"Codigo: "<<lista_clientes[i].codigo_Cli<<endl;
        cout << "Nombre: " << lista_clientes[i].nombre_Cli << endl;
        cout << "Apellido: " << lista_clientes[i].apellido_Cli << endl;
        cout << "Cantidad de Fotos: " << lista_clientes[i].cantidad_Fotos << endl;
        cout << "Valor Unitario Por Foto: " << lista_clientes[i].valorUnitario_Foto << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
    
}

//	Busqueda de clientes por codigo
int BusquedaCodigo(){
	int consulta;
    cout << "Ingrese el codigo de cliente para consultar sus datos: ";
    cin >> consulta;
	system("cls");
    bool clienteEncontrado = false;
    for (int i = 0; i < 4; i++) {
        if (lista_clientes[i].codigo_Cli == consulta) {
            // Verificar si el cliente ha sido eliminado
            bool eliminado = false;
            for (int j = 0; j < 4; j++) {
                if (clientes_eliminados.codigo_Cli == consulta) {
                    eliminado = true;
                    break;
                }
            }

            if (!eliminado) {
                clienteEncontrado = true;
                cout<<"Datos del cliente con codigo "<<consulta<<":"<<endl;
                cout<<"Nombre: "<<lista_clientes[i].nombre_Cli<<endl;
                cout<<"Apellido: "<<lista_clientes[i].apellido_Cli<<endl;
                cout<<"Cantidad de Fotos: "<<lista_clientes[i].cantidad_Fotos<<endl;
                cout<<"Valor Unitario Por Foto: "<<lista_clientes[i].valorUnitario_Foto<<endl;
                break;
            } else {
                cout<<"El cliente con codigo "<<consulta<<" fue eliminado."<<endl;
                break;
            }
        }
    }

    if (!clienteEncontrado) {
        cout<<"No existe un cliente con ese codigo"<<endl;
    }
}


//	Venta de Fotos
int VentaFotos(){
	int consulta;
    cout << "Ingrese el codigo de cliente para consultar sus datos: ";
    cin >> consulta;
	system("cls");
    bool clienteEncontrado = false;
    for (int i = 0; i < 4; i++) {
        if (lista_clientes[i].codigo_Cli == consulta) {
            // Verificar si el cliente ha sido eliminado
            bool eliminado = false;
            for (int j = 0; j < 4; j++) {
                if (clientes_eliminados.codigo_Cli == consulta) {
                    eliminado = true;
                    break;
                }
            }

            if (!eliminado) {
                clienteEncontrado = true;
                cout<<"Datos del cliente con codigo "<<consulta<<":"<<endl;
                cout<<"Nombre: "<<lista_clientes[i].nombre_Cli<<endl;
                cout<<"Apellido: "<<lista_clientes[i].apellido_Cli<<endl;
                cout<<"Cantidad de Fotos: "<<lista_clientes[i].cantidad_Fotos<<endl;
                cout<<"Valor Unitario Por Foto: "<<lista_clientes[i].valorUnitario_Foto<<endl;
                cout<<"Valor Total: "<<lista_clientes[i].cantidad_Fotos * lista_clientes[i].valorUnitario_Foto<<endl;
                break;
            } else {
                cout<<"El cliente con codigo "<<consulta<<" fue eliminado."<<endl;
                break;
            }
        }
    }

    if (!clienteEncontrado) {
        cout<<"No existe un cliente con ese codigo"<<endl;
    }
}

//	Eliminacion de Clientes
int EliminarCliente(){
	int consulta;
    cout<<"Ingrese el codigo de cliente a eliminar: ";
    cin>>consulta;

    bool encontrado = false;

    for (int i = 0; i < 4; i++) {
        if (lista_clientes[i].codigo_Cli == consulta) {
            encontrado = true;

            // Mover elementos hacia atrás para llenar el espacio
            for (int j=i;j<4-1;j++) {
                lista_clientes[j] = lista_clientes[j + 1];
            }

            // Agregar el cliente eliminado a la lista de eliminados
            clientes_eliminados = lista_clientes[3];

            cout<<"Cliente con codigo "<<consulta<<" eliminado."<<endl;
            break;
        }
    }

    if (!encontrado) {
        cout<<"No existe un cliente con ese codigo"<<endl;
    }
}

//	Inicio de Programa
int main() {
    bool mseguir=true;
    do{
    	cout<<"---Bienvenido---"<< endl;
    	cout<<"---Menu de Clientes---"<<endl;
    	cout<<"1. Clientes en sistema."<<endl;
    	cout<<"2. Busqueda por Codigo."<<endl;
    	cout<<"3. Consulta venta de Fotos."<<endl;
    	cout<<"4. Eliminacion de Cliente."<<endl;
    	cout<<"5. Salir."<<endl;
    	cin>>op;
    	
    	switch(op)
    	{
    		case 1:
    			system("cls");
    			ClientesEnSistema();
    		break;
    		
    		case 2:
    			system("cls");
    			BusquedaCodigo();
    			system("pause");
    		break;
    		
    		case 3:
    			system("cls");
    			VentaFotos();
    			system("pause");
    		break;
    		
    		case 4:
    			system("cls");
    			EliminarCliente();
    			system("pause");
    		break;
    		
    		case 5:
    			mseguir=false;
    		break;
		}
    	
	}while(mseguir==true);
}

