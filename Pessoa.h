#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

class Pessoa{
  private:
    std::string nome;
    int idade;
    std::string telefone;
  public:
    Pessoa(std::string nome);
    Pessoa(std::string, int idade, std::string telefone);

    std::string getNome();
    void setNome(std::string n);

    int getIdade();
    void setIdade(int i);

    std::string getTelefone();
    void setTelefone(std::string t);

};

#endif // PESSOA_H
