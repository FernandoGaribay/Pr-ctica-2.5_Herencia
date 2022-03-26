#include "Cheques.h"
#include "Ahorros.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // titular, numero, saldo, tasaInteres, periodo
    Ahorros objAhorros("Fernando", 21310414, 100, 0.10, 30);

    // titular, numero, saldo, cantidadCheques
    Cheques objCheques("Ivan", 21310418, 200, 10);

    cout << "objAhorros : calcularIntereses();" << endl;
    cout << "Saldo sin intereses: " << objAhorros.getSaldo() << endl;

    objAhorros.setTiempo(60); // Se establece un tiempo de 60 dias.
    objAhorros.calcularIntereses();
    cout << "Saldo con intereses: " << objAhorros.getSaldo() + objAhorros.getIntereses(); // 10% cada 30 dias


    cout << "\n\nobjCheques : girarCheque(100);" << endl;
    
    cout << "Cantidad de cheques: " << objCheques.getCantidadCheques() << endl;
    cout << "Saldo antes del cheque: "<< objCheques.getSaldo() << endl;

    objCheques.girarCheque(100); // $100 pesos de cheque
    cout << "\nCantidad de cheques: " << objCheques.getCantidadCheques() << endl;
    cout << "Saldo despues del cheque: " << objCheques.getSaldo() << endl;

    cout << "\n\nobjCheques : mostrarDatos()\n" << endl;
    objCheques.mostrarDatos();

    cout << "\nobjAhorros : mostrarDatos()\n" << endl;
    objAhorros.mostrarDatos();

    cout << "\n";
    return 0;
}