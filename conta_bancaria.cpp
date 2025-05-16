#include "header.h"
#include <iostream>
using namespace std;

Conta_bancaria::Conta_bancaria(int number, Cliente holder, double outcome)
    : numero(number), titular(holder), saldo(outcome) {
}

int Conta_bancaria::getNumero() {
    return numero;
}

double Conta_bancaria::getSaldo() {
    return saldo;
}

Cliente Conta_bancaria::getTitular() {
    return titular;
}

void Conta_bancaria::depositar(double valor) {
    if (valor > 0) {
        this->saldo += valor;
        cout << "Depósito feito com sucesso!" << endl;
    } else {
        cout << "Valor inválido" << endl;
    }
}

void Conta_bancaria::sacar(double valor) {
    if (valor > 0 && valor <= this->saldo) {
        this->saldo -= valor;
        cout << "Saque de R$ " << valor << " realizado da conta " << this->getNumero() << endl;
    } else {
        cout << "Saldo insuficiente" << endl;
    }
}

void Conta_bancaria::transferir(double valor, Conta_bancaria &destino) {
    if (valor > 0 && valor <= this->saldo) {
        this->saldo -= valor;
        destino.saldo += valor;
        cout << "Transferido: R$ " << valor << " da conta " << this->getNumero()
             << " para a conta " << destino.getNumero() << endl;
    } else {
        cout << "Saldo insuficiente" << endl;
    }
}

void Conta_bancaria::transferir(double valor, Conta_bancaria &destino1, Conta_bancaria &destino2) {
    if (valor > 0 && valor <= this->saldo) {
        this->saldo -= valor;
        destino1.saldo += valor / 2;
        destino2.saldo += valor / 2;
        cout << "Transferido: R$ " << valor / 2 << " para cada conta ("
             << destino1.getNumero() << " e " << destino2.getNumero() 
             << ") da conta " << this->getNumero() << endl;
    } else {
        cout << "Transferência inválida" << endl;
    }
}

void Conta_bancaria::exibirSaldo() {
    cout << "Saldo atual da conta " << this->getNumero() << ": R$ " << this->getSaldo() << endl;
}

void Conta_bancaria::exibirInformacoes() {
    Cliente cliente = this->getTitular();
    cout << "Titular: " << cliente.getNome() << ", CPF: " << cliente.getCpf() << endl;
    cout << "Número da conta: " << this->getNumero() << ", Saldo: R$ " << this->getSaldo() << endl;
}