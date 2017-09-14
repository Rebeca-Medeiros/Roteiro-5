#include <iostream>
#include "Empregado.h"

using namespace std;

int main(){

	Empregado e1 = Empregado("Rosa", "Diaz", 1250);
	Empregado e2 = Empregado("Amelia", "Santiago", 1350);

	cout << e1.getNome() << " " << e1.getSobrenome() << " Salario mensal: " << e1.getSalarioM() << endl;
	cout << e2.getNome() << " " << e1.getSobrenome() << " Salario mensal: " << e2.getSalarioM() << endl;

	e1.salarioAnual(e1.getSalarioM());
	e2.salarioAnual(e2.getSalarioM());

	return 0;
}
