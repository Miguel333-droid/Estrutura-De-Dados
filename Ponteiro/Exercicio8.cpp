#include <iostream>
#include <cstring>
using namespace std;

void preencherEImprimir(string &nome, int &idade) {
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a idade: ";
    cin >> idade;

    cout << "\nDados da pessoa:" << endl;
    cout << "Nome: " << nome << ", Endereco de nome: "<< &nome << endl;
    cout << "Idade: " << idade << ", Endereco de idade: "<< &idade << endl;
}

int main() {
    string nome;
    int idade;
    
    preencherEImprimir(nome, idade);

   	cout << "\nAcessando de main():" << endl;
    cout << "Nome: " << nome << ", Endereco de nome: "<< &nome << endl;
    cout << "Idade: " << idade << ", Endereco de idade: "<< &idade << endl;

}
