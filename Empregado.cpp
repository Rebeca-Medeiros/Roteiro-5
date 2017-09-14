#include "Empregado.h"
#include <iostream>
#include <string>

void Empregado::setNome(std::string n){
	nome = n;
}

void Empregado::setSobrenome(std::string s){
	sobrenome = s;
}

void Empregado::setSalarioM(double sm){
	salarioM = sm;
}

std::string Empregado::getNome(){
	return nome;
}

std::string Empregado::getSobrenome(){
	return sobrenome;
}

double Empregado::getSalarioM(){
	return salarioM;
}



Empregado::Empregado(std::string nome, std::string sobrenome, double salarioM){
	if(salarioM < 0){
		std::cout << "Valor invalido, digite um novo salario" << std::endl;
	}

}

double Empregado::salarioAnual(double salarioM){
	double salarioA;

	double aumento;

	salarioA = salarioM * 12;

	std::cout << "O salario anual eh: " << salarioA << std::endl;

	aumento = salarioM * 0.1;

	salarioA = salarioM * ( 12 * aumento);

	std::cout << "O aumento de 10%% foi: " << aumento << std::endl;
	std::cout << "O novo salario anual eh: " << salarioA << std::endl;

}
