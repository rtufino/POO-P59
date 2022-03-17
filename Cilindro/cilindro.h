#ifndef CILINDRO_H
#define CILINDRO_H

#include "circulo.h"

class Cilindro
{
private:
    Circulo base;
    float altura;
public:
    Cilindro();
    Cilindro(float radio, float altura);
    float volumen();

    Circulo &getBase();
    float getAltura() const;
    void setAltura(float newAltura);
};

#endif // CILINDRO_H
