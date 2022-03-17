#include "circulo.h"

Circulo::Circulo()
{
    radio = 0;
}

Circulo::Circulo(float r){
    radio = r;
}

float Circulo::area(){
    float a = pow(radio,2) * PI;
    return a;
}

void Circulo::setRadio(float valor){
    radio = valor;
}

