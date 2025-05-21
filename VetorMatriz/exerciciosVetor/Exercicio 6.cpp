#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int vet[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	
	for (i = 0; i < 10; i++) {
		if(vet[i] % 2 == 0) {
			cout << vet[i] << " ";
		}
	}
}
