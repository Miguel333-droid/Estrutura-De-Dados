#include <iostream>
#include <iomanip>

using namespace std;

#define lin 3
#define col 3

int main() {
	int m1[lin][col] = {{0,1,0}, 
				{1,0,1},
				{0,1,0}
				};
	
	int x,y;
	int num0 = 0;
	int numI = 0;
	
	
	for (y=0;y<lin;y++) {
		for (x=0;x<col;x++){
			if (m1[y][x] == 0) {
				num0++;
			} else {
				numI++;
			}
		}
	}
	
	if (num0 > numI) {
		cout << "eh esparsa";
	} else {
		cout << "nao eh esparsa";
	}
}
