#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string mapa[6][6];
    srand(time(0)); // Inicializar la semilla para la generación aleatoria basada en el tiempo actual

    // Generar el mapa con 'v's
    for (int f = 0; f < 6; f++) {
        for (int c = 0; c < 6; c++) {
            mapa[f][c] = "v";
        }
    }

    // Generar 5 'f's aleatoriamente
    int totalFs = 0;
    while (totalFs < 5) {
        int f = rand() % 6;
        int c = rand() % 6;
        
        if (mapa[f][c] == "v") {
            mapa[f][c] = "f";
            totalFs++;
        }
    }

    // Imprimir el mapa resultante
    for (int f = 0; f < 6; f++) {
        for (int c = 0; c < 6; c++) {
            cout << mapa[f][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}


