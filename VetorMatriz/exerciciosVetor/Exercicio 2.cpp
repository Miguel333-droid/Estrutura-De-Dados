#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
		int n,i = 0;
		double vet[5];
		
		
		
		
		for (i = 0; i < 5; i++) {
			cout << "Digite a posicao " << i << "  do vetor: ";
			cin >> vet[i];
			
			
			if (vet[i] > n) {
				n = vet[i];
			}
		}
		
		cout << "O maior número digitado foi: " << n;
		
	
		
    
	

}
