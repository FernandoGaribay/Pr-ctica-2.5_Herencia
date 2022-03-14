#include "Cheques.h"
#include "Ahorros.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Ahorros objAhorros("Fernando", 21310414, 100, 10, 5);
    Cheques objCheques("Ivan", 21310418, 200, 10);

    cout << "objAhorros : calcularIntereses(); = ";
    objAhorros.calcularIntereses();
    cout << objAhorros.getSaldo();

    cout << "objCheques : girarCheque(); = ";
    objCheques.girarCheque(10);
    objCheques.getSaldo();

    return 0;
}