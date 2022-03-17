#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

using namespace std;

class Paciente
{
private:
    int id;             /* Numero identificador del paciente */
    string nombre;      /* Nombre del paciente */
    int edad;           /* Edad del paciente */
    bool positivo;      /* Si la prueba Covid-19 es positivo */
    string estaContagiado();/* Retorna una cadena dependiendo si esta o no contagiado */
public:
    static int totalPacientes;  /* Contador statico de la clase */

    Paciente();             /* Constructor por defecto */
    Paciente(string, int);  /* Constructor (nombre, edad)*/
    string ficha();         /* Obtiene la ficha (datos) del paciente */
    void setPositivo(bool newPositivo);
    int getId() const;
};

#endif // PACIENTE_H
