#include <iostream>
//#include "aluno.h"
#include "turma.h"

using namespace std;

int main ()
{
	Aluno aluno1;
	aluno1.setNome("Emerson\n");
	aluno1.setMatricula("2018");
	aluno1.setIdade(36);
	
	Turma turma;
	turma.setCodigo("LP1, ");
	turma.setDescricao("linguagem de programação, ");
	turma.setCapacidade(10);
  //turma.mostrarAlunos();
  std::cout << "Nome = " << aluno1.getNome() << "Matricula = " << aluno1.getMatricula() << endl << "Idade = " << aluno1.getIdade() << std::endl;
  std::cout << "Código = " << turma.getCodigo() << "Descrição = " << turma.getDescricao() << endl << "Capacidade = " << turma.getCapacidade() << std::endl;
	

  return 0;
}