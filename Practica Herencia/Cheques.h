#pragma once
#include "Cuenta.h"
#include <iostream>
#include <string>

using namespace std;

class Cheques : public Cuenta
{
public:
	int cantidadCheques;
private:
	Cheques();
	Cheques(string, int, double, int);
	~Cheques();
	void setCantidadCheques(int);
	int getCantidadCheques();
	void girarCheque(int);
};

