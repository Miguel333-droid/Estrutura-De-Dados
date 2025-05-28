#include <iostream>
using namespace std;

int main() {
    int t = 0;	
    cout << "Digite quantas posicoes seu array tera: ";
    cin >> t;
	
    int* array = new int[t];

    cout << "Digite os numeros: ";
    for (int i = 0; i < t; i++) {
        cin >> array[i];
    }

    cout << "Voce digitou: ";
    for (int i = 0; i < t; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}

