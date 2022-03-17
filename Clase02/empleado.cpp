#include "empleado.h"

const string &Empleado::getNombre() const
{
    return nombre;
}

//void Empleado::setNombre(const string &newNombre)
//{
//    nombre = newNombre;
//}

double Empleado::getSalario() const
{
    return salario;
}

string Empleado::getDatos()
{
    string datos = "Nombre: " + nombre + "\n" + "Salario: " + to_string(salario);
    return datos;
}

void Empleado::incremento(float porcentaje)
{

    double inc = salario * porcentaje / 100;
    salario += inc;
}

//void Empleado::setSalario(double newSalario)
//{
//    salario = newSalario;
//}

Empleado::Empleado()
{
    nombre = "Ninguno";
    salario = 0;

}

Empleado::Empleado(const string &nombre, double salario) : nombre(nombre), salario(salario)
{

}
