#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "estudiante.h"

class Controlador
{
private:
    Estudiante *modelo;
    void cargarBaseDatos();
    float promedio();
public:
    Controlador();
    void actualizarNota(int nota, int valor);
    string visualizar();
};

#endif // CONTROLADOR_H
