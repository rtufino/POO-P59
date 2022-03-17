#include <iostream>

#include "paciente.h"
#include "hospital.h"

using namespace std;

// Inicializar la variable estatica
int Paciente::totalPacientes = 0;

int main()
{

    // Crear un paciente
    Paciente p("Gorgolito Perez", 23);

    // Imprimir la ficha del paciente
    cout << p.ficha();


    // Crear el hospital
    Hospital objHospital("HCAM");

    // Ingresar un paciente
    objHospital.ingresarPaciente();
    objHospital.ingresarPaciente();

    // Imprimir lista
    cout << "Total pacientes: " << objHospital.getNumPacientes();
    objHospital.listarPacientes();

    // Cambiar estado
    if (objHospital.cambiarEstado()){
        cout << "Si cambio";
    }else{
        cout << "No cambio";
    }

    objHospital.listarPacientes();


    return 0;
}
