#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double vet[4] = {1,2,3,4};
	int i,n = 0;
	
	cout << "Digite um número: ";
	cin >> n;
	
	for(i = 0; i < 4; i++) {
	
	 cout << "A multiplicacao do " << i << " vetor eh de: " << vet[i] * n << endl; 	
	}
}
