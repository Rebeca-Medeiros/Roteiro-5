#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <iostream>
#include <string>

class Pagamento{
  private:
    double valorPagamento;
    string nomeDoFuncionario;
  public:
    double getValorPagamento();
    void setValorPagamento(double valorPagamento);

    string getNomeDoFuncionario();
    void setNomeDoFuncionario(string nomeDoFuncionario);
};

#endif // PAGAMENTO_H
