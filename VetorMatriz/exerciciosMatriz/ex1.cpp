#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int m1[3][3] = {{3,8,5}, 
				{2,7,4},
				{9,6,1}
				};
				
	int m2[3][3] = {{9,6,1}, 
				{3,8,5},
				{2,7,4}
				};
	
	int m3[3][3];
	
	int x,y;
	
	for (y=0;y<3;y++) {
		for (x=0;x<3;x++){
			m3[y][x] = m1[y][x] + m2[y][x];
			cout << m3[y][x] << + "	";
		}
		cout << endl;
	}
}
