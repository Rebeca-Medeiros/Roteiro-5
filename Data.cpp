#include "Data.h"
#include <iostream>

void Data::setDia(int d){
	dia = d;
}

void Data::setMes(int m){
	 mes = m;
}

void Data::setAno(int a){
	ano = a;
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

Data::Data(int dia, int mes, int ano){

    if(dia > 31){
        std::cout << "Data invalida" << std::endl;
    }

    if(mes >= 13){
        std::cout << "Mes invalido" << std::endl;
    }

    if(dia == 28 && mes != 2){
        std::cout << "Numero de dias invalido para o mes" << std::endl;
	std::cout << "1" << std::endl;
    }

    if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia > 31)){
        std::cout << "Numero de dias invalido para o mes" << std::endl;
	std::cout << "2" << std::endl;
    }

    if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia > 30)){
        std::cout << "Numero de dias invalido para o mes" << std::endl;
	std::cout << "3" << std::endl;
    }
}


void Data::avancarDia(int dia, int mes, int ano){

    if(dia == 31){
        dia = 1;
        mes++;
	std::cout << "Nova data: " << dia << "/" << mes << "/" << ano << std::endl;
    } else {
	dia++;
    	std::cout << "Nova data: " << dia << "/" << mes << "/" << ano << std::endl;
    }

    if(mes == 12 && dia == 31){
        ano++;
	mes = 1;
	std::cout << "Nova data: " << dia << "/" << mes << "/" << ano << std::endl;
    }


}
