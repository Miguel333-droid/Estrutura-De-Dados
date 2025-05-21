#include <iostream>
using namespace std;

#define altura 5
#define largura 5


int main() {
	int x,y;
	char matriz[altura][largura];
	
	for (y=0;y<altura;y++) {
		for (x=0;x<largura;x++){
			matriz [y][x] = 0;
		}
	}
	
	cout << endl << "Entre coordenadas na forma \"y x\"."<<endl;
	cout << "Use valores negativos para sair do programa."<<endl;
	
	cout<<"Coordenadas: ";
	cin >>y >> x;
	
	while (x>=0 && y>=0) {
		matriz[y][x] = 1;
		
		for (y=0;y<altura;y++){
			for (x=0;x<largura;x++) {
				cout << matriz[y][x] << " ";
			}
			cout << endl<< endl;
		}
		cout << endl;
		cout << "Coordenadas: ";
		cin >> y >> x;
	}
}
