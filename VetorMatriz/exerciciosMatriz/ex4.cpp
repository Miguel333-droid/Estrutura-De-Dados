#include <iostream>
#include <iomanip>

using namespace std;

#define col 3
#define lin 3

int main() {
	int m1[col][lin] = {{1,0,0}, 
				{0,2,0},
				{0,0,1}
				};
				
	int x;
	
	for (x=0;x<3;x++) {
		if (m1[x][x] !=1) {
			cout << "nao eh matriz identidade";
			exit(0);
		}
	}
	cout << "eh matriz identidade";
}
