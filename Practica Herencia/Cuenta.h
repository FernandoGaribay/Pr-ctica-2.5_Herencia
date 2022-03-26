#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cuenta
{
private:
	string titular;
	int numero;
	double saldo;
public:
	Cuenta();
	Cuenta(string, int, double);
	~Cuenta();
	void depositar(double);
	void retirar(double);
	void setTitular(string);
	string getTitular();
	void setSaldo(double);
	double getSaldo();
	void setNumero(int);
	int getNumero();
	void mostrar();
};