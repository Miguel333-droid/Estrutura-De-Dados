#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int vet[5] = {1,2,3,4,5};
	int n,i = 0;
	
	cout << "Digite um numero de 1 a 10: ";
	cin >> n;
	
	for(i = 0; i < 5; i++) {
		if ((vet[i]) == n) {
		  cout << "O numero eh presente no vetor!";
		  exit(0);
		}
	}
	
	cout << "O numero nao esta presente no vetor";
}
