#include <string>
#include "header.h"
using namespace std;

Cliente::Cliente(string name, string id) {
  nome = name;
  cpf = id;
}

string Cliente::getNome() {
  return nome;
}

string Cliente::getCpf() {
  return cpf;
}
