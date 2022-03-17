#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
private:
    string cedula;
protected:
    string nombre;
    int edad;
public:
    Persona();
    Persona(string cedula, string nombre, int edad);
    string informacion();
    const string &getCedula() const;
};

#endif // PERSONA_H
