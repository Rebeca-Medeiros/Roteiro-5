#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
	Invoice in1(3, "Cuscuz", 5, 4.57);
	Invoice in2(4, "Arroz", 7, 3.50);

	in1.setNumero(7);
	in1.setQuantidade(12);
	in1.setDescricao("Bolo");
	in1.setPrecop(7.89);

	in2.setNumero(12);
	in2.setQuantidade(5);
	in2.setDescricao("Leite");
	in2.setPrecop(7.89);

	in1.getInvoiceAmount(5, 4.57);
	in2.getInvoiceAmount(2, 1.2);

	return 0;

}
