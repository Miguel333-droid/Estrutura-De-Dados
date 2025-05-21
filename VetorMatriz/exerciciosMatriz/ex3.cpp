#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float m1[3][3] = {{3.6,8.3,5.8}, 
				{2.1,7.9,4.3},
				{9.3,6.8,1.8}
				};
	float menor;		
	int x,y;
	
	for (y=0;y<3;y++) {
		for (x=0;x<3;x++){
			if ((m1[y][x] < menor) or ((y==1) and (x==1))){
				menor = m1[y][x];
			}
		}
	}
	cout << "O menor elemento eh " << menor;
}
