#pragma once
#include "Cuenta.h"
#include <iostream>
#include <string>

using namespace std;


class Ahorros : public Cuenta
{
private:
	double tasaIntereses;
	double intereses;
	int periodo;
	int tiempo;
public:
	Ahorros();
	Ahorros(string, int, double, double, int);
	~Ahorros();
	void calcularIntereses();
	void setTasaIntereses(double);
	void setIntereses(double);
	double getTasaIntereses();
	double getIntereses();
	void setPeriodo(int);
	int getPeriodo();
	void setTiempo(int);
	int getTiempo();
	void mostrarDatos();
};