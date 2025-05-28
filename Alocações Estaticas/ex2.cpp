#include <iostream>
 using namespace std;
 
 int main () {
 	
 	int soma, n = 0;
 	int array[5];
 	cout << "Digite 5 notas do aluno: ";
 	
 	
 	for(int i = 1; i <= 5; i++) {
 		cin >> array[n];
 		soma += array[n];
	 }
	 
	 cout << "A media final do aluno eh de: " << soma/5;
 }

