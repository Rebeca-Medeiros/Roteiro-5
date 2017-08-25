#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

class Invoice{
	public: 
		int numero;
		std::string descricao;
		int quantidade;
		double precop;
	
		Invoice(int numero, std::string descricao, int quantidade, double precop);
		double getInvoiceAmount(int quantidade, double preco);
};



#endif // INVOICE_H
