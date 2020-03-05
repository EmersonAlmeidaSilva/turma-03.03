#include "aluno.h"
using namespace std;

class Turma {

  private: 
    string codigo;
    string descricao;
    short capacidade;
    Aluno* participantes;

  public:
  //get & set
    string getCodigo();
    void setCodigo(string var_codigo);
    string getDescricao();
    void setDescricao(string var_descricao);
    short getCapacidade();
    void setCapacidade(short var_capacidade);
    
    void addParticipantes(Aluno umAluno);
    void setParticipantes();

};