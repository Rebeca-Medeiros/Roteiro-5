#include "Data.h"
#include <iostream>

Data::Data(int dia, int mes, int ano){

    if(dia > 31){
        std::cout << "Data invalida" << std::endl;
    }

    if(mes >= 13){
        std::cout << "Mes invalido" << std::endl;
    }

    if(dia == 28 && mes != 2){
        std::cout << "Numero de dias invalido para o mes" << std::endl;
    }

    if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia != 31)){
        std::cout << "Numero de dias invalido para o mes" << std::endl;
    }

    if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia != 30)){
        std::cout << "Numero de dias invalido para o mes" << std::endl;
    }
}


void Data::avancarDia(){
    dia++;

    if(dia == 31){
        dia = 1;
        mes++;
	std::cout << dia << "/" << 
    }

    if(mes == 12 && dia == 31){
        mes = 1;
        ano++;
    }
}
