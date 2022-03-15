#include "Ahorros.h"
#include <iostream>
#include <string>

using namespace std;

Ahorros::Ahorros() {
	this->tasaIntereses = 0;
	this->periodo = 0;
}

Ahorros::Ahorros(string titular, int numero, double saldo, double tasaInteres, int periodo) : Cuenta(titular, numero, saldo) {
	this->tasaIntereses = tasaInteres;
	this->periodo = periodo;
}

Ahorros::~Ahorros() {}


void Ahorros::calcularIntereses() {
	double saldo = getSaldo();
	double tasaIntereses = getTasaIntereses();
	int periodo = getPeriodo();

	setSaldo(saldo + tasaIntereses * (tiempo / periodo));
}


void Ahorros::setTasaIntereses(double tasa) {
	this->tasaIntereses = tasa;
}
double Ahorros::getTasaIntereses() {
	return tasaIntereses;
}

void Ahorros::setPeriodo(int periodo) {
	this->periodo = periodo;
}
int Ahorros::getPeriodo() {
	return periodo;
}

void Ahorros::setTiempo(int tiempo) {
	this->tiempo = tiempo;
}
int Ahorros::getTiempo() {
	return tiempo;
}