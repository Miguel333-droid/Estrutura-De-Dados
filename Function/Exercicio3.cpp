#include <iostream>
using namespace std;


void vet() {
	int q,m;
	m = 0;
	
	cout << "Digte quantas posiçoes seu vetor de inteiros tera:" ;
	cin >> q;
    int v[q];
	cout << endl;
	cout << "Digite os valores: " << endl;
	
	for (int i = 0; i <= q; i++) {
		cin >> v[i];
		
		
		if (m < v[i]) {
			m = v[i];
		}
	}
	
	cout << "O maior elemento do vetor eh: " << m;
}

int main() {
	vet();
}
