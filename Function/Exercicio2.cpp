#include <iostream>
using namespace std;

void boolean() {
	int n;
	cout << "Digite um numero: " ;
	cin >> n;
	
	if (n % 2 == 0) {
		cout << "Verdadeiro";
	} else
	cout << "Falso";
}

int main () {
	boolean();
}
