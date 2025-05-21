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
	
	int m2[lin][col];
	
	int x,y;
	
	for (y=0;y<lin;y++) {
		for (x=0;x<col;x++){
			m2[x][y] = m1[y][x];
		}
	}
	
	for (y=0;y<lin;y++) {
		for (x=0;x<col;x++){
			cout << m2[y][x]<<"	";
		}
		cout << endl;
	}
	
}
