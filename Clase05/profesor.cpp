#include "profesor.h"

Profesor::Profesor() : Persona()
{
    this->salario = 0;
}

Profesor::Profesor(string cedula, string nombre, int edad, float salario) : Persona(cedula, nombre, edad)
{
    this->salario = salario;
}

string Profesor::informacion()
{
    return "Cedula: " + this->getCedula() + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n" +
            "Salario: $" + to_string(this->salario) + "\n" +
            "Salario neto: $" + to_string(this->salarioNeto()) + "\n";
}

float Profesor::salarioNeto()
{
    float descuentoIESS = this->salario * this->IESS / 100;
    return this->salario - descuentoIESS;
}
