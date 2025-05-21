#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int  vet1[3] = {786,2,86};
	int  vet2[3] = {1,2,3};
    int  vet3[3];
    int i;
    
    for ( i = 0; i < 3; i++) {
    	vet3[i] = vet1[i] + vet2[i];
    	cout << vet3[i] << " ";
	}
	

}
