#ifndef VISTA_H
#define VISTA_H

#include <iostream>
#include "controlador.h"

using namespace std;

class Vista
{
private:
    Controlador *control;
    bool estaEnRango(int nota);
public:
    Vista();
    void imprimir();
    void actualizarNota();
};

#endif // VISTA_H
