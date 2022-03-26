#include "Ahorros.h"
#include <iostream>
#include <string>

using namespace std;

Ahorros::Ahorros() {
	this->tasaIntereses = 0;
	this-> intereses = 0;
	this->periodo = 0;
	this->tiempo = 0;
}

Ahorros::Ahorros(string titular, int numero, double saldo, double tasaInteres, int periodo) : Cuenta(titular, numero, saldo) {
	this->tasaIntereses = tasaInteres;
	this->periodo = periodo;
	this->tiempo = 0;
}

Ahorros::~Ahorros() {}


void Ahorros::calcularIntereses() {
	setIntereses(getSaldo() * getTasaIntereses() * (getTiempo() / getPeriodo()));
}
void Ahorros::mostrarDatos() {
	mostrar();
	cout << "Cantidad de interes: " << getIntereses() << endl;
}


void Ahorros::setTasaIntereses(double tasa) {
	this->tasaIntereses = tasa;
}
void Ahorros::setIntereses(double intereses) {
	this->intereses = intereses;
}

double Ahorros::getTasaIntereses() {
	return tasaIntereses;
}
double Ahorros::getIntereses() {
	return intereses;
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