#include "Cuenta.h"

Cuenta::Cuenta() {
	this->titular = "";
	this->numero = 0;
	this->saldo = 0;
}

Cuenta::Cuenta(string titular, int numero, double saldo) {
	this->titular = titular;
	this->numero = numero;
	this->saldo = saldo;
}

Cuenta::~Cuenta() {}


void Cuenta::depositar(double cantidad) {
	setSaldo(getSaldo() + cantidad);
}
void Cuenta::retirar(double cantidad) {
	setSaldo(getSaldo() - cantidad);
}

void Cuenta::setTitular(string titular) {
	this->titular = titular;
}
string Cuenta::getTitular() {
	return titular;
}

void Cuenta::setSaldo(double saldo) {
	this->saldo = saldo;
}
double Cuenta::getSaldo() {
	return saldo;
}

void Cuenta::setNumero(int numero) {
	this->numero = numero;
}
int Cuenta::getNumero() {
	return numero;
}