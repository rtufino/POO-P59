#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"

class Estudiante : public Persona
{
private:
    int creditos;
    const float MATRICULA_FIJO = 200;
    const float VALOR_HORA = 3.10;
public:
    Estudiante();
    Estudiante(string cedula, string nombre, int edad, int creditos);
    string informacion();
    float matricula();
};

#endif // ESTUDIANTE_H
