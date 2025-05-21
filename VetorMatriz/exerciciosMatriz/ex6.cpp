#include <iostream>
#include <iomanip>

using namespace std;

#define lin 3
#define col 3

int main() {
	int m1[lin][col] = {{3,8,5}, 
				{2,7,4},
				{9,6,1}
				};
	
	int v1[lin];
	
	int x,y;
	int soma=0;
	
	for (y=0;y<lin;y++) {
		for (x=0;x<col;x++){
			soma += m1[y][x];
		}
		v1[y] = soma;
		soma =0;
	}
	
	for (y=0;y<lin;y++) {
		cout << v1[y] << "	";	
	}	
}
