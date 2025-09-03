#include <iostream>
using namespace std;

// Função que recebe um ponteiro para o array e o tamanho do array
int encontrarMaior(int *arr, int tamanho) {
    int maior = *arr; // Inicializa com o primeiro elemento do array

    for (int i = 1; i < tamanho; i++) {
        if (*(arr + i) > maior) {
            maior = *(arr + i); // Atualiza o maior valor
        }
    }

    return maior;
}

int main() {
     int tamanho = 0;
    
    
     cout << "Quantos numeros tera? " ;
     cin >> tamanho ;
     
     int numeros[tamanho];
    
    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i << ": ";
        cin >> numeros[i];
    }

    
    int maiorValor = encontrarMaior(numeros, tamanho);

    
    cout << "O maior valor do array eh: " << maiorValor << endl;

    return 0;
}

