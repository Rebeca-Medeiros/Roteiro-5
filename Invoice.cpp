#include "Invoice.h"
#include <iostream>

void Invoice::setNumero(int n){
	numero = n;
}

void Invoice::setQuantidade(int q){
	 quantidade = q;
}

void Invoice::setDescricao(std::string s){
	std::string descricao = std::string s;
}

void Invoice::setPrecop(double p){
	precop = p;
}

int Invoice::getNumero(){
	return numero;
}

int Invoice::getQuantidade(){
	return quantidade;
}

int Invoice::getPrecop(){
	return precop;
}

std::string Invoice::getDescricao(){
	return std::descricao;
}




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
