#ifndef PERRO_H
#define PERRO_H

#include "animal.h"

class Perro : public Animal
{
public:
    Perro();
    Perro(string nombre);
    string habla();
};

#endif // PERRO_H
