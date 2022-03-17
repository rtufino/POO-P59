#include "gato.h"

Gato::Gato() : Animal()
{
    this->queSoy = "gato";
}

Gato::Gato(string nombre) : Animal(nombre)
{
    this->queSoy = "gato";
}

string Gato::habla()
{
    return "miau!";
}
