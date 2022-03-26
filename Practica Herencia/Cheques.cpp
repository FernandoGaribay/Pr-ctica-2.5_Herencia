#include "Cheques.h"
#include <iostream>
#include <string>

using namespace std;

Cheques::Cheques() {
	this->cantidadCheques = 0;
}

Cheques::Cheques(string titular, int numero, double saldo, int cantidadCheques) : Cuenta(titular, numero, saldo) {
	this->cantidadCheques = cantidadCheques;
}

Cheques::~Cheques() {}


void Cheques::girarCheque(int cantidad) {
	setCantidadCheques(getCantidadCheques() - 1);
	setSaldo(getSaldo() - cantidad);
}
void Cheques::mostrarDatos() {
	mostrar();
	cout << "Cantidad de cheques: " << getCantidadCheques() << endl;
}


void Cheques::setCantidadCheques(int cantidad) {
	this->cantidadCheques = cantidad;
}
int Cheques::getCantidadCheques() {
	return cantidadCheques;
}