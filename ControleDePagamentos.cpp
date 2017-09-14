#include "ControleDePagamentos.h"
#include "Pagamento.h"

#include <iostream>
#include <string>

ControleDePagamentos::ControleDePagamentos(){

}

Pagamento ControleDePagamentos::getPagamentos(){
  return pagamentos;
}

void ControleDePagamentos::setPagamentos(Pagamento pg[2]){
  pagamentos[2] = pg[2];
}

double ControleDePagamentos::calculaTotaldePagamentos(){
  double total = 0;
  int i;

  for(i = 0; i < pagamentos[2]; i++){
    total += pagamentos[i].getValorPagamento();
  }

  cout << total << endl;

  return total;
}

boolean ControleDePagamentos::existePagamentoParaFuncionario(string funcionario){
  int i;

  for(i = 0; i < pagamentos[2]; i++){
    if(funcionario == pagamentos[i].getNomeDoFuncionario()){
      return true;
    }
  }

  return false;
}
