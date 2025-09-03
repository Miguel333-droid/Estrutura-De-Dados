#include <iostream>
using namespace std;

const int LINHAS = 3;
const int COLUNAS = 3;


void preencherMatriz(int *matriz) {
    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            
            cin >> *(matriz + i * COLUNAS + j);
        }
    }
}


void imprimirMatriz(int* matriz) {
    cout << "\nMatriz 3x3:" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << *(matriz + i * COLUNAS + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];

    preencherMatriz(&matriz[0][0]);
    imprimirMatriz(&matriz[0][0]);

    return 0;
}

