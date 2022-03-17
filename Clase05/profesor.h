#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"

class Profesor : public Persona
{
private:
    float salario;
    const float IESS = 9.8;
public:
    Profesor();
    Profesor(string cedula, string nombre, int edad, float salario);
    string informacion();
    float salarioNeto();
};

#endif // PROFESOR_H
