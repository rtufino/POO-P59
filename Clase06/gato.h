#ifndef GATO_H
#define GATO_H

#include "animal.h"

class Gato : public Animal
{
public:
    Gato();
    Gato(string nombre);
    string habla();
};

#endif // GATO_H
