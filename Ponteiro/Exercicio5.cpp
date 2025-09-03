#include <iostream>
using namespace std;

void AlocaPont(int **p) {
	*p = new int;
	**p = 10;
}

int main() {
	int *ptr;
	
	AlocaPont(&ptr);
	
	cout << "Valor alocado: " << *ptr << endl;
	
	delete ptr;1
}
