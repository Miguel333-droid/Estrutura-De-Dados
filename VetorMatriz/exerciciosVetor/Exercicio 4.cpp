#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int vet[7] = {1, 2, 3, 4, 5, 6, 7}; 
    int i;
    
    for (i = 0; i < 6; i++) { 
        if (vet[i] >= vet[i + 1]) { 
            cout << "A ordem nao eh crescente"; 
            exit(0);
        }
    }
    
    cout << "A ordem eh crescente"; 
    
}

