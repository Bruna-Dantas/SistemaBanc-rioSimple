#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;

class Cliente {
  private:
    string nome;
    string cpf;

  public:
    Cliente(string name, string id);
    string getNome();
    string getCpf();
};

class Conta_bancaria {
  private: 
    int numero;
    Cliente titular;
    double saldo;

  public:
    Conta_bancaria(int number, Cliente holder, double outcome = 0);
    int getNumero();
    double getSaldo();
    Cliente getTitular();

    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, Conta_bancaria &destino);
    void transferir(double valor, Conta_bancaria &destino1, Conta_bancaria &destino2);
    void exibirSaldo();
    void exibirInformacoes();
    
};

#endif