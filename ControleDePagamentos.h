#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include <iostream>
#include <string>
#include "Pagamento.h"

class ControleDePagamentos{
  private:
    Pagamento pagamentos[2];
  public:
    Pagamento getPagamentos();
    void setPagamentos(Pagamento pg);
};


#endif // CONTROLEDEPAGAMENTOS_H
