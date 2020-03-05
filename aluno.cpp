#include <iostream>
#include "aluno.h"
using namespace std;

string Aluno::getMatricula() {
  return matricula;
}
void Aluno::setMatricula(string var_matricula){
  matricula = var_matricula;
}
short Aluno::getIdade(){
  return idade;
}
void Aluno::setIdade(short var_idade){
  idade = var_idade;
}
string Aluno::getNome(){
  return nome;
} 
void Aluno::setNome(string var_nome){
  nome = var_nome;
}