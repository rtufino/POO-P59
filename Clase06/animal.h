#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
private:
    string nombre;
protected:
    string queSoy;
public:
    Animal();
    Animal(string nombre);
    string quienEres();
    virtual string habla();
};

#endif // ANIMAL_H
