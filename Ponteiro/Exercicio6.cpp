#include <iostream>
using namespace std;

int main() {
   
    char str[] = "Oi Professor, meu nome eh Miguel";

    
    char *ptr = str;

    
    cout << "String completa: " << ptr << endl;

    
    cout << "Caracteres da string:"  << endl;
    while (*ptr != '\0') { 
        cout << *ptr << " ";
        ptr++; 
    }

    cout << endl;
    
}

