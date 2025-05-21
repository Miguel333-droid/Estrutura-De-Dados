#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n,i,s = 0;
	
	cout << "Digite um numero: ";
	cin >> n;
	
	int v[n];
	
	for(i = 0; i <= n; i++) {
		v[i] = i;
		s = s +i; 
	}
	
	cout << s;
}
