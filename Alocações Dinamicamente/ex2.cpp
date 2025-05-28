#include <iostream>

using namespace std;

int main() {
    int linhas, colunas;

    cout << "Digite o numero de linhas: ";
    cin >> linhas;
    cout << "Digite o numero de colunas: ";
    cin >> colunas;

    
    int** matriz = new int*[linhas];
    for (int i = 0; i < linhas; ++i) {
        matriz[i] = new int[colunas];
    }

   
    cout << "Digite os elementos da matriz:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

   
    cout << "\nMatriz:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

   
    for (int i = 0; i < linhas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}

