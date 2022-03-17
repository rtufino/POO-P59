#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <string>
#include <vector>
#include <iostream>

#include "paciente.h"

using namespace std;

class Hospital
{
private:
    string nombre;
    vector<Paciente> listaPacientes;
public:
    Hospital();
    Hospital(string nombre);
    void ingresarPaciente();
    void listarPacientes();
    bool darDeAlta();
    bool cambiarEstado();
    int getNumPacientes();

};

#endif // HOSPITAL_H
