#include <iostream>

#include "cilindro.h"

using namespace std;

int main()
{
    cout << "= = VOLUMEN DE UN CILINDRO = =" << endl;

    Cilindro objCilindro;
    char opc = 's';
    do{
        cout << "Ingrese el radio y la altura: ";
        float r, h;
        cin >> r >> h;
        objCilindro.setAltura(h);
        objCilindro.getBase().setRadio(r);
        cout << "El volumen del cilindro es: " << objCilindro.volumen() << endl;
        cout << "Desea continuar (S/n): ";
        cin >> opc;
        // TODO: Crear un método que valide si un número es negativo
    }while(opc == 's' || opc == 'S');




    return 0;
}












