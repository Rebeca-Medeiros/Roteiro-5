#include <iostream>
#include "Empregado.h"

using namespace std;

int main(){
	
	Empregado e1 = Empregado("João", "Dos Santos", 1250);
	Empregado e2 = Empregado(e2.nome, e2.sobrenome, e2.salarioM);

	cout << "Nome: " << endl;
	cin >> e2.nome;

	cout << "Sobrenome: " << endl;
	cin >> e2.sobrenome;

	cout << "Salario mensal: " << endl;
	cin >> e2.salarioM;

	e1.salarioAnual(1250.45);
	e2.salarioAnual(e2.salarioM);

	return 0;
}
