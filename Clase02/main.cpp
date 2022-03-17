#include <iostream>

#include "empleado.h"

using namespace std;

int main()
{
    Empleado emp01("Juan",400);
    Empleado emp02("Maria", 250);

    cout << "Empleado 1\n" << emp01.getDatos() << endl;
    cout << "Empleado 2\n" << emp02.getDatos() << endl;

    emp01.incremento(10);
    cout << "Empleado 1\n" << emp01.getDatos() << endl;

    return 0;
}
