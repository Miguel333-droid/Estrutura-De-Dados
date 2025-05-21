#include <iostream>
using namespace std;

int main() {
	int i, nota[4];
	float total;
	
	for (i=0;i<4;i++) {
		cout << "Entre a nota do estudante "<< i <<": ";
		cin >> nota[i];
	}
	cout << "Notas : ";
	
	total = 0;
	for (i=0;i<4;i++) {
		cout << nota[i] << " ";
		total = total+nota[i];
	}
	cout << endl << "Media: " << total/4 << endl;
}
