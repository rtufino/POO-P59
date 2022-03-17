#include <iostream>

using namespace std;

// Declaración de la clase perro
class Perro {

    // Miembros de la clase
public:
    // Atributos
    string nombre;
    int edad;
    string raza;
    bool esMacho;
    // Constructor (por defecto)
    Perro(){
        nombre = "";
        edad = 0;
        raza = "";
        esMacho = true;
    }
    // Sobrecarga del constructor
    Perro(string n, int e, string r, bool macho){
        nombre = n;
        edad = e;
        raza = r;
        esMacho = macho;
    }

    // Metodos
    string sexo(){
        if (esMacho){
            return "Macho";
        }else {
            return "Hembra";
        }
    }

    void informacion(){
        // Imprimiendo los atributos
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad<< endl;
        cout << "Raza: " << raza << endl;
        // Invocando a un método
        cout << "Sexo: " << sexo() << endl;
    }

};

int main()
{
    cout << "-- Mi primera Clase --" << endl;
    // Instanciar (crear el objeto 1)
    Perro objPerro;
    // Asignar valores a los atributos
    objPerro.nombre = "Rocky";
    objPerro.edad = 36;
    objPerro.raza = "Mastin italiano";
    objPerro.esMacho = true;
    // Imprimiendo los atributos (datos)
    cout << "\nPerro 1\n";
    objPerro.informacion();

    // Instanciar utilizando un constructor (objeto 2)
    Perro objPerro2("Mía",6,"Yorkshire terrier",false);
    cout << "\nPerro 2\n";
    objPerro2.informacion();

    // Ingresando datos por teclado
    cout << "\nIngrese el nombre del perro: ";
    string nombre;
    getline(cin,nombre);
    cout << "Ingrese la edad: ";
    int edad;
    cin >> edad;
    cout << "Ingrese la raza: ";
    string raza;
    cin.ignore();
    getline(cin,raza);
    cout << "Seleccione el sexo:\n1. Macho\n0. Hembra\nIngrese su opción: ";
    bool sexo;
    cin >> sexo;

    // Creando el objeto 3
    Perro objPerro3(nombre,edad,raza,sexo);
    cout << "\nPerro 3\n";
    objPerro3.informacion();

    return 0;
}







