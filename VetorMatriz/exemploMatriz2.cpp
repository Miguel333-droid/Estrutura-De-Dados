#include <iostream>
#include <iomanip>

using namespace std;

#define lin 10
#define col 10


int main() {
	int x,y;
	int matriz[lin][col];
	
	for (y=0;y<lin;y++) {
		for (x=0;x<col;x++){
			matriz [y][x] = y*x;
		}
	}
	
	cout<<"\n            Tabela de Multiplicacao\n";
	
	cout <<setw(6) << 0;
	
	for (x=1; x< col;x++) {
		cout << setw(3) << x;
	}
	cout << endl;
	
	cout << "	";
	
	for (x=0;x<3*col;x++) {
		cout << "-";
	}
	cout << endl;
	
	for (y=0; y<lin;y++) {
		cout << setw(2) << y << "|";
		for (x=0;x<col;x++){
			cout << setw(3) << matriz[y][x];
		}
		cout <<endl;
	}
}
