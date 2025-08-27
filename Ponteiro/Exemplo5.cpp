#include <iostream>
using namespace std;

int main() {
	int i;
	int *v;
	
	v = new int[5];
	
	v[0] = 10;
	v[1] = 11;
	v[2] = 12;
	v[3] = 19;
	v[4] = 29;
	
	for (i = 0; i < 5; i++) {
		cout << "v[" << i << "]: " << v[i] << " no endereco " << &v[i] << endl;
	}
	
	cout << "\nEndereco de 'v': " << v << endl;
	
	delete[] v;
}
