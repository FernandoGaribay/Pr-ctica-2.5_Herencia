#pragma once
#include "Cuenta.h"
#include <iostream>
#include <string>

using namespace std;

class Cheques : public Cuenta
{
private:
	int cantidadCheques;
public:
	Cheques();
	Cheques(string, int, double, int);
	~Cheques();
	void setCantidadCheques(int);
	int getCantidadCheques();
	void girarCheque(int);
	void mostrarDatos();
};