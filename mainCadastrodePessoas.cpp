#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){

  Pessoa p1 = Pessoa("Maria");
  Pessoa p2 = Pessoa("Jose", 40, "3245-1234");

  p1.setNome("Amy Santiago");

  p2.setNome("Rosa Diaz");
  p2.setIdade(36);
  p2.setTelefone("5432-9876");


  return 0;
}
