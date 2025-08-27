#include <iostream>
using namespace std;

int main() {
	int *ptr;
	
	ptr = new int;
	
	if (ptr == NULL) {
		cout << "Memoria insuficiente!" << endl;
		exit(1);
	}
	
	cout << "Endereco de ptr: " << ptr << endl;
	*ptr = 90;
	
	cout << "Conteudo de ptr: " << *ptr << endl;
	
	delete ptr;
}
