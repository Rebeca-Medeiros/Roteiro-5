#ifndef INVOICE_H
#define INVOICE_H
#include <string>
#include <iostream>

class Invoice{
	private:
		int numero;
		std::string descricao;
		int quantidade;
		double precop;
	public:
		Invoice(int numero, std::string descricao, int quantidade, double precop);
		double getInvoiceAmount(int quantidade, double preco);

		int getNumero();
		void setNumero(int n);

		int getQuantidade();
		void setQuantidade(int q);

		std::string getDescricao();
		void setDescricao(std::string s);

		double getPrecop();
		void setPrecop(double p);

};



#endif // INVOICE_H
