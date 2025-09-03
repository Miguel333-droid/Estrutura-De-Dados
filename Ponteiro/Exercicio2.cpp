#include <iostream>
using namespace std;

void ValTroca(int *a, int *b) {
	int troca;
	
	troca = *a;
	*a = *b;
	*b = troca; 
	
}

int main() {
	int *a, *b;
	
	
	a = new int;
	b = new int;
	
	cout << "Digite o valor de A: ";
	cin >> *a;
	cout << "Digite o valor de B: ";
	cin >> *b;
	
	ValTroca(a,b);
	
	cout << "Conteudo de A = " << *a << "\n Conteudo de B = " << *b;
	delete a,b;
}
