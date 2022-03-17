#include "controlador.h"

void Controlador::cargarBaseDatos()
{
    this->modelo = new Estudiante("Ariel", 5, 7, 9);
}

float Controlador::promedio()
{
    float p = (this->modelo->getNota1() +
               this->modelo->getNota2() +
               this->modelo->getNota3()) / 3.0;
    return p;
}

Controlador::Controlador()
{
    this->cargarBaseDatos();
}

void Controlador::actualizarNota(int nota, int valor)
{
    switch (nota) {
    case 1:
        this->modelo->setNota1(valor);
        break;
    case 2:
        this->modelo->setNota2(valor);
        break;
    case 3:
        this->modelo->setNota3(valor);
        break;
    }
}

string Controlador::visualizar()
{
    string str = this->modelo->getDatos() + "Promedio: " +
            to_string(this->promedio()) + "\n\n";
    return str;
}







