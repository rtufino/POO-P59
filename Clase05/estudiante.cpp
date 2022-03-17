#include "estudiante.h"

Estudiante::Estudiante() : Persona()
{
    this->creditos = 0;
}

Estudiante::Estudiante(string cedula, string nombre, int edad, int creditos) : Persona(cedula, nombre, edad)
{
    this->creditos = creditos;
}

string Estudiante::informacion()
{
    return Persona::informacion() +
            "Creditos: " + to_string(this->creditos) + "\n" +
            "Matricula: $" + to_string(this->matricula()) + "\n";
}

float Estudiante::matricula()
{
    return this->MATRICULA_FIJO + (this->creditos * this->VALOR_HORA);
}
