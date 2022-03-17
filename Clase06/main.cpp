#include <iostream>
#include <vector>

#include "animal.h"
#include "perro.h"
#include "gato.h"

using namespace std;

int main()
{
    cout << "-- POLIMORFISMO --" << endl;
    /*
    Animal objA("Salvaje");
    Perro objB;
    Gato objC("Chispita");

    cout << objA.quienEres() << endl;
    cout << objB.quienEres() << endl;
    cout << objC.quienEres() << endl;
    */

    vector<Animal*> listaAnimales;
     listaAnimales.push_back(new Perro("Odie"));
     listaAnimales.push_back(new Gato("Kaiza"));
     listaAnimales.push_back(new Gato("Mishu"));
     listaAnimales.push_back(new Perro("Max"));

     for(Animal *a : listaAnimales){
         cout << a->quienEres() << " : " << a->habla() << endl;
     }

//     for (size_t i = 0; i < listaAnimales.size(); i++ ){
//        cout << listaAnimales[i].quienEres() << " : " << endl;
//     }

    return 0;
}
