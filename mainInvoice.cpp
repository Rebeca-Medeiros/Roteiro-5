#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
	Invoice in1 = Invoice(3, "Cuscuz", 5, 4.57);
	Invoice in2 = Invoice(in2.numero, in2.descricao, in2.quantidade, in2.precop);

	cout << "Digite o numero do produto: " << endl;
	cin >> in2.numero;

	cout << "Descricao: " << endl;
	cin >> in2.descricao;
	
	cout << "Quantidade: " << endl;
	cin >> in2.quantidade;

	cout << "Preco do produto: " << endl;
	cin >> in2.precop;

	in1.getInvoiceAmount(5, 4.57);
	in2.getInvoiceAmount(in2.quantidade, in2.precop);

	return 0;	
	
}
