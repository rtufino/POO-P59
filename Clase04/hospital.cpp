#include "hospital.h"

Hospital::Hospital()
{
    this->nombre = "";
}

Hospital::Hospital(string nombre)
{
    this->nombre = nombre;
}

void Hospital::ingresarPaciente()
{
    string nombre;
    int edad;
    bool estaContagiado;

    cout << "\nIngrese el nombre del paciente: ";
    getline(cin, nombre);
    cout << "Ingrese la edad del paciente: ";
    cin >> edad;
    // Creando (instancia) de un objeti Paciente
    Paciente p(nombre, edad);

    // Preguntar si está o no contagiado
    cout << "¿El paciente está contiagiado?\n";
    cout << "1: Si\n0: No\n";
    cout << "Ingrese el valor de la prueba: ";
    cin >> estaContagiado;
    p.setPositivo(estaContagiado);

    // Agregando un paciente a la lista del hospital
    this->listaPacientes.push_back(p);

    // para que no emita error al momento de ingresar otro string
    cin.ignore();
}

void Hospital::listarPacientes()
{
    cout << "\n= = HOSPITAL " + this->nombre + "= =\n";
    // Recorrer lista de pacientes
    for (Paciente p : this->listaPacientes){
        cout << p.ficha();
    }
}

bool Hospital::darDeAlta()
{
    return true;
}

bool Hospital::cambiarEstado()
{
    cout << "\n==CAMBIAR ESTADO DE UN PACIENTE ==\n";
    cout << "Ingrese el id: ";
    int id;
    cin >> id;

    for (size_t i=0; i< this->listaPacientes.size(); i++){
        if (this->listaPacientes[i].getId() == id){
            this->listaPacientes[i].setPositivo(true);
            return true;
        }
    }

    return false;
}

int Hospital::getNumPacientes()
{
    return listaPacientes.size();
}







