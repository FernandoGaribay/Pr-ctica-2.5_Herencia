#include "Cheques.h"
#include "Ahorros.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // titular, numero, saldo, tasaInteres, periodo
    Ahorros objAhorros("Fernando", 21310414, 100, 0.10, 60);

    // titular, numero, saldo, cantidadCheques
    Cheques objCheques("Ivan", 21310418, 200, 10);

    cout << "objAhorros : calcularIntereses();" << endl;
    cout << "Saldo sin intereses: " << objAhorros.getSaldo() << endl;

    objAhorros.setTiempo(30); // Se establece un tiempo de 30 dias.
    objAhorros.calcularIntereses();
    cout << "Saldo con intereses: " << objAhorros.getSaldo();


    cout << "\n\nobjCheques : girarCheque(100);" << endl;
    
    cout << "Cantidad de cheques: " << objCheques.getCantidadCheques() << endl;
    cout << "Saldo antes del cheque: "<< objCheques.getSaldo() << endl;

    objCheques.girarCheque(100);
    cout << "\nCantidad de cheques: " << objCheques.getCantidadCheques() << endl;
    cout << "Saldo despues del cheque: " << objCheques.getSaldo();

    return 0;
}