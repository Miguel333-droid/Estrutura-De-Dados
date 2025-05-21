#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	 string vet[4] = {"bob", "ot43t43t54yi" , "alooo" , "vegeta"};
	 string maior = vet[0];
	 int i = 0;
	 
	 for (i = 0; i < 4; i++) {
	 	if(vet[i].size() > maior.size()) {
	 		maior = vet[i];
		 }
	 }
	 
	  cout << "A maior string eh: " << maior << endl;
}










