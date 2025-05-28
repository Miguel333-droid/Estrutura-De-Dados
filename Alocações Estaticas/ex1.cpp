#include <iostream>
 using namespace std;

int main() {
    int soma, t = 0;
    
    
    cout << "Digite quantas posicoes sua array tera: ";
     cin >> t;
     int tamanho[t];
     cout << "Digite os numeros a serem somados: ";
    

    for (int i = 0; i <   t; i++) {
    	cin >> tamanho[t];
    	soma += tamanho[t];
    }
    
    
    cout << "A soma dos elementos eh: " << soma << endl;


}

