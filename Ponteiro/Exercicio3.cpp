#include <iostream>
using namespace std;

int main() {
    int* arr = new int[10];  

    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];  
    }

    cout << "Os números digitados foram:\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl;

    delete[] arr;  

    return 0;
}

