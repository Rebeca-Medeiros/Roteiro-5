#ifndef DESPESA_H
#define DESPESA_H

#include <iostream>
#include <string>

class Despesa{
  private:
    double gastos;
    string tipoDeGasto;
  public:
    Despesa(double gastos, string tipoDeGasto);

    double getGastos();
    void setGastos(double g);

    string getTipoDeGasto();
    void setTipoDeGasto(string tp);

};




#endif // DESPESA_H
