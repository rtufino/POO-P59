#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado
{
private:
    string nombre;
    double salario;
public:
    Empleado();
    Empleado(const string &nombre, double salario);

    const string &getNombre() const;
    //void setNombre(const string &newNombre);
    double getSalario() const;
    //void setSalario(double newSalario);

    string getDatos();
    void incremento(float porcentaje);
};

#endif // EMPLEADO_H
