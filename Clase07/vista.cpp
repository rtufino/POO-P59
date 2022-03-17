#include "vista.h"

bool Vista::estaEnRango(int nota)
{
    /* Para los novatos
    bool val;
    if ((0 <= nota) && (nota <= 10)){
        val = true;
    }else{
        val = false;
    }
    return val;
    */
    // Para los pupilos (profesionales)
    return ((0 <= nota) && (nota <= 10));
}

Vista::Vista()
{
    this->control = new Controlador();
}

void Vista::imprimir()
{
    cout << control->visualizar();
}

void Vista::actualizarNota()
{
    int nota = 0;
    do{
        cout << "Ingrese la nota 1: ";
        cin >> nota;
    }while(!estaEnRango(nota));
    this->control->actualizarNota(1,nota);
    cout << "Nota 1 actualizada!" << endl;
}
