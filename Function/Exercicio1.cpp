#include <iostream>
using namespace std;

void soma() {
    int n1, n2;
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    int resultado = n1 + n2;
    cout << "A soma eh: " << resultado << endl;
}

int main() {
    soma();
    
}

