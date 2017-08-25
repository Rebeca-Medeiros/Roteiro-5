#include "Invoice.h"
#include <iostream>

Invoice::Invoice(int numero, std::string descricao, int quantidade, double precop){
	
	if(quantidade < 0){
		quantidade = 0;
		std::cout << "Quantidade = " << quantidade << std::endl;   	
	}

	if(precop < 0){
		precop = 0.0;
		std::cout << "Preco do produto = " << precop << std::endl;	
	}	

}

double Invoice::getInvoiceAmount(int quantidade, double precop){
	
	double precof;
	
	precof = quantidade * precop;
	
	std::cout << "Valor da fatura: " << precof << std::endl;

}
