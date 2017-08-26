#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>

class Empregado{
	public:
		std::string nome;
		std::string sobrenome;
		double salarioM;
		double salarioA;
		double aumento;
		
		Empregado(std::string nome, std::string sobrenome, double salarioM);
		double salarioAnual(double salarioM, double salarioA, double aumento);

};


#endif // EMPREGADO_H
