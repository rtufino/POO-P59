#include <iostream>

#include "persona.h"
#include "profesor.h"
#include "estudiante.h"

using namespace std;

int main()
{
    cout << "-- HERENCIA --" << endl;
    Persona objA("1723453421","Juan", 25);
    Profesor objB("1023456543", "Angie", 32, 1500);
    Estudiante objC("0923433124", "Michelle", 20, 720);

    cout << objA.informacion() << endl;
    cout << objB.informacion() << endl;
    cout << objC.informacion() << endl;
    return 0;
}
