#include <iostream>
#include <string>
using namespace std;

class materia {
private:
    int clave;
    string nombre;
    string profT;
    string libroT;

public:
    materia(int C, string N, string P, string L) {
        clave = C;
        nombre = N;
        profT = P;
        libroT = L;
    }

    void imprime() {
        cout << "clave de materia: " << clave << endl;
        cout << "nombre materia: " << nombre << endl;
        cout << "profesor: " << profT << endl;
        cout << "Libro: " << libroT << endl;
        cout << "\n\n" << endl;
    }

    void cambiarClave(int nuevaClave) {
        clave = nuevaClave;
    }

    void cambiarProfesor(string nuevoProfesor) {
        profT = nuevoProfesor;
    }
};

int main() {
    materia Programacion(217222228, "programacion", "Marco Gonzalez", "algoritmos");
    materia BD(12345678, "Base de Datos", "Nancy Quintero", "Introduccion a base de datos");
    int opcion;

    do {
        cout << "Menu:" << endl;
        cout << "1. Cambiar clave de Programacion" << endl;
        cout << "2. Cambiar profesor de Base de Datos" << endl;
        cout << "3. Imprimir datos de Base de Datos" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:{
                int nuevaClave;
                cout << "Ingrese la nueva clave para Programacion: ";
                cin >> nuevaClave;
                Programacion.cambiarClave(nuevaClave);
                break;
                }
            case 2:{
                string nuevoProfesor;
                cout << "Ingrese el nuevo profesor para Base de Datos: ";
                cin.ignore(); // Limpiar el buffer del newline anterior
                getline(cin, nuevoProfesor);
                BD.cambiarProfesor(nuevoProfesor);
                break;

                }
            case 3:{
                BD.imprime();
                break;
            }
            case 4:{
                cout << "Saliendo del programa..." << endl;
                break;

                }
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 4);

    return 0;
}



