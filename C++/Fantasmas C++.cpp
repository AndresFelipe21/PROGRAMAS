#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int f, c, i;
string mapa[6][6];

void generar_Mapa() {
    for (f = 0; f < 6; f++) {
        for (c = 0; c < 6; c++) {
            mapa[f][c] = "v";
            cout << mapa[f][c] << " ";
        }
        cout << "\n";
    }
}

void generar_Fantasma() {
    srand(time(0)); // Inicializar la semilla para la generación aleatoria basada en el tiempo actual
    int totalFs = 0;

    while (totalFs < 5) {
        f = rand() % 6;
        c = rand() % 6;

        if (mapa[f][c] == "v") {
            mapa[f][c] = "f";
            totalFs++;
        }
    }

    for (f = 0; f < 6; f++) {
        for (c = 0; c < 6; c++) {
            cout << mapa[f][c] << " ";
        }
        cout << "\n";
    }
}

int main() {
    generar_Mapa();
    cout << "----------------" << endl;
    generar_Fantasma();

    return 0;
}
