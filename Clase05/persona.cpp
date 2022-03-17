#include "persona.h"

const string &Persona::getCedula() const
{
    return cedula;
}

Persona::Persona()
{
    this->cedula = "";
    this->nombre = "";
    this->edad = 0;
}

Persona::Persona(string cedula, string nombre, int edad)
{
    this->cedula = cedula;
    this->nombre = nombre;
    this->edad = edad;
}

string Persona::informacion()
{
    return "Cedula: " + this->cedula + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n";
}


