#ifndef CIRCULO_H
#define CIRCULO_H

#include <math.h>

#define PI 3.141516

class Circulo
{
private:
    float radio;
public:
    Circulo();
    Circulo(float r);
    float area();
    void setRadio(float valor);
};

#endif // CIRCULO_H
