#pragma once
#include "Cuenta.h"
#include <iostream>
#include <string>

using namespace std;


class Ahorros : public Cuenta
{
public:
	double tasaIntereses;
	int periodo;
private:
	Ahorros();
	Ahorros(string, int, double, double, int);
	~Ahorros();
	void calcularIntereses();
	void setTasaIntereses(double);
	double getTasaIntereses();
	void setPeriodo(int);
	int getPeriodo();
};

