#include "Pessoa.h"
#include <iostream>

std::string Pessoa::getNome(){
  return nome;
}

int Pessoa::getIdade(){
  return idade;
}

std::string Pessoa::getTelefone(){
  return telefone;
}

void Pessoa::setNome(std::string n){
  nome = n;
}

void Pessoa::setIdade(int i){
  idade = i;
}

void Pessoa::setTelefone(std::string t){
  telefone = t;
}

Pessoa::Pessoa(std::string nome){

}

Pessoa::Pessoa(std::string nome, int idade, std::string telefone){

}
