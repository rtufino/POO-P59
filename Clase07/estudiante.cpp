#include "estudiante.h"

const string &Estudiante::getNombre() const
{
    return nombre;
}

void Estudiante::setNombre(const string &newNombre)
{
    nombre = newNombre;
}

int Estudiante::getNota1() const
{
    return nota1;
}

void Estudiante::setNota1(int newNota1)
{
    nota1 = newNota1;
}

int Estudiante::getNota2() const
{
    return nota2;
}

void Estudiante::setNota2(int newNota2)
{
    nota2 = newNota2;
}

int Estudiante::getNota3() const
{
    return nota3;
}

void Estudiante::setNota3(int newNota3)
{
    nota3 = newNota3;
}

string Estudiante::getDatos()
{
    return "\nNombre: " + this->nombre + "\n" +
            "Nota 1:" + to_string(this->nota1) + "\n" +
            "Nota 2:" + to_string(this->nota2) + "\n" +
            "Nota 3:" + to_string(this->nota3) + "\n";
}

Estudiante::Estudiante()
{
    this->nombre = "";
    this->nota1 = 0;
    this->nota2 = 0;
    this->nota3 = 0;
}

Estudiante::Estudiante(const string &nombre, int nota1, int nota2, int nota3) : nombre(nombre),
    nota1(nota1),
    nota2(nota2),
    nota3(nota3)
{}
