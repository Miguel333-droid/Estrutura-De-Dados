#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Qual sera o tamanho do array? ";
    cin >> n;

   
    int* arr = new int[n];

    cout << "Digite os valores do array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    cout << "Valores do array usando ponteiro:" << endl;

    
    int* ptr = arr;

    
    for (int i = 0; i < n; i++) {
        cout << *ptr << " "; 
        ptr++;               
    }

    cout << endl;

    
    delete[] arr;

    return 0;
}

