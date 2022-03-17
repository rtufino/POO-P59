#include "animal.h"

Animal::Animal()
{
    this->nombre = "";
    this->queSoy = "animal";
}

Animal::Animal(string nombre) : Animal()
{
    this->nombre = nombre;
}

string Animal::quienEres()
{
    return "Soy un " + this->queSoy + " y me llamo '" + this->nombre + "'";
}

string Animal::habla()
{
    return "Grrrr!";
}
