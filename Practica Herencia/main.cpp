#include "Cheques.h"
#include "Ahorros.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Ahorros objAhorros("Fernando", 21310414, 100, 10, 60);
    Cheques objCheques("Ivan", 21310418, 200, 10);

    cout << "objAhorros : calcularIntereses(); = ";
    objAhorros.setTiempo(30);
    objAhorros.calcularIntereses();
    cout << objAhorros.getSaldo();

    cout << "\n\nobjCheques : girarCheque(); = ";
    objCheques.girarCheque(10);
    cout << objCheques.getSaldo();

    return 0;
}