#include <iostream>
//#include "aluno.h"
#include "turma.h"
using namespace std;

string Turma::getCodigo(){
  return codigo;
}
void Turma::setCodigo(string var_codigo){
  codigo = var_codigo;
}

string Turma::getDescricao(){
  return descricao;
}
void Turma::setDescricao(string var_descricao){
  descricao = var_descricao;
}

short Turma::getCapacidade(){
  return capacidade;
}
void Turma::setCapacidade(short var_capacidade){
  capacidade = var_capacidade;
  participantes = new Aluno[capacidade];
  //lotacao = 0;
}
    
void setParticipantes();

