#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int m1[3][4] = {{3,8,5}, 
				{2,7,4},
				{9,6,1}
				};
	int x,y;
	
	for (y=0;y<3;y++) {
		for (x=0;x<3;x++){
			if (m1[y][x] != m1[x][y]) {
				break;
			}
		}
	}
	cout << "Eh simetrico";
}
