#include <iostream>
using namespace std;


int contarOcorrencias(int *arr, int tamanho, int valor) {
    int contador = 0;

   
    for (int i = 0; i < tamanho; i++) {
        if (*(arr + i) == valor) {
            contador++;
        }
    }

    return contador;
}

int main() {
    const int tamanho = 10;
    int numeros[tamanho] = {3, 5, 7, 3, 9, 3, 2, 5, 3, 1};
    int valorProcurado = 7;

    int resultado = contarOcorrencias(numeros, tamanho, valorProcurado);

    cout << "O valor " << valorProcurado << " aparece " << resultado << " vezes no array." << endl;

    
}

