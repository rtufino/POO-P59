#include "paciente.h"

void Paciente::setPositivo(bool newPositivo)
{
    positivo = newPositivo;
}

int Paciente::getId() const
{
    return id;
}

string Paciente::estaContagiado()
{
    /*
    if (this->positivo){
        return "Si";
    }else {
        return "No";
    }
    */
    return this->positivo ? "Si" : "No";
}

Paciente::Paciente()
{
    this->id = 0;
    this->nombre = "";
    this->edad = 0;
    this->positivo = false;
}

Paciente::Paciente(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->positivo = false;
    // Incrementar el total de pacientes
    Paciente::totalPacientes++;
    // ASignar el número actual como id del paciente
    this->id = Paciente::totalPacientes;
}

string Paciente::ficha()
{
    return "ID: " + to_string(this->id) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n" +
            "Tiene Covid-19: " + estaContagiado() + "\n\n";
}












