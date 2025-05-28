#include <iostream>
using namespace std;

int main() {
	int m1[2][2] = {{2,3},{3,4}};
	int m2[2][2] = {{3,2},{4,3}};
	int m3[2][2];
	int temp = 0;
	
	
	for (int i = 0;i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			for(int k = 0; k < 2; k++) {
				temp += m1[i][k] * m2[k][j];
			}
			m3[i][j] = temp;
			temp = 0;
		}
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2;j++) {
			cout << m3[i][j] << " ";
		}
		cout << endl;
		
	}
}
