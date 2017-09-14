#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>

class Empregado{
	private:
		std::string nome;
		std::string sobrenome;
		double salarioM;
		//double salarioA;
		double aumento;
	public:
		Empregado(std::string nome, std::string sobrenome, double salarioM);
		double salarioAnual(double salarioM);

		std::string getNome();
		void setNome(std::string n);

		std::string getSobrenome();
		void setSobrenome(std::string s);

		double getSalarioM();
		void setSalarioM(double sm);


};


#endif // EMPREGADO_H
