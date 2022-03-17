#include "cilindro.h"

Circulo &Cilindro::getBase()
{
    return base;
}

float Cilindro::getAltura() const
{
    return altura;
}

void Cilindro::setAltura(float newAltura)
{
    altura = newAltura;
}

Cilindro::Cilindro()
{
    altura = 0;
}

Cilindro::Cilindro(float radio, float altura) : base(radio),
    altura(altura)
{}

float Cilindro::volumen(){
    return base.area() * altura;
}
