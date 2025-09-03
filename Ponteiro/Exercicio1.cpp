#include <iostream>
using namespace std;


int main() {
	
	int a, *p;
	
	cout << "Digite o valor de A: ";
	cin >> a;
	p = &a;
	cout << "Valor de A = " << a << " \nEndereco de A = " << &p;
	
}
