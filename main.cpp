/*
Asignación 6: Figuras en 3D
Nombre: Gianna Garcia Fox
Núm. Est: 801-22-7123
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Constante global para pi
const double PI = 3.14;

// prototipo para encontrar volumen
double volumen(double radio);
double volumen(double radio, double altura);
double volumen(double largo, double ancho, double alto);

// prototipo para encontrar área
double area(double radio);
double area(double radio, double altura);
double area(double largo, double ancho, double alto);

int main() {
    char figura, seleccion;
    double rad, alt, lar, anc;

    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras." << endl;

    // Opcion de figura geometrica
    cout << "Escoja una figura:\n  a. Cilindro\n  b. Esfera\n  c. Prisma rectangular\nSelección: ";
    cin >> figura;

    if (figura != 'a' && figura != 'b' && figura != 'c') {
        cout << "Opción inválida." << endl;
    }

    // Opcion de volumen o area
    cout << "Escoja:\n  a. Volumen\n  b. Área de la superficie\nSelección: ";
    cin >> seleccion;

    if (seleccion != 'a' && seleccion != 'b') {
        cout << "Opción inválida." << endl;
    }

    cout << fixed << setprecision(2);

    switch (figura) {
        case 'a': // Cilindro
            cout << "Entre el radio del cilindro: ";
            cin >> rad;
            cout << "Entre la altura del cilindro: ";
            cin >> alt;
            if (rad < 0 || alt < 0) {
                cout << "Error: no se permiten valores negativos." << endl;
            }
            if (seleccion == 'a')
                cout << "Volumen del cilindro: " << volumen(rad, alt) << endl;
            else
                cout << "Área del cilindro: " << area(rad, alt) << endl;
            break;

        case 'b': // Esfera
            cout << "Entre el radio de la esfera: ";
            cin >> rad;
            if (rad < 0) {
                cout << "Error: no se permiten valores negativos." << endl;
            }
            if (seleccion == 'a')
                cout << "Volumen de la esfera: " << volumen(rad) << endl;
            else
                cout << "Área de la esfera: " << area(rad) << endl;
            break;

        case 'c': // Prisma rectangular
            cout << "Largo: ";
            cin >> lar;
            cout << "Ancho: ";
            cin >> anc;
            cout << "Altura: ";
            cin >> alt;
            if (lar < 0 || anc < 0 || alt < 0) {
                cout << "Error: no se permiten valores negativos." << endl;;
            }
            if (seleccion == 'a')
                cout << "Volumen del prisma: " << volumen(lar, anc, alt) << endl;
            else
                cout << "Área del prisma: " << area(lar, anc, alt) << endl;
            break;
    }

    return 0;
}

//Funciones Volumen
double volumen(double radio) {
    return (4.0 / 3.0) * PI * radio * radio * radio; // Esfera
}

double volumen(double radio, double altura) {
    return PI * radio * radio * altura; // Cilindro
}

double volumen(double largo, double ancho, double alto) {
    return largo * ancho * alto; // Prisma rectangular
}

// Funciones área
double area(double radio) {
    return 4 * PI * radio * radio; // Esfera
}

double area(double radio, double altura) {
    return 2 * PI * radio * (radio + altura); // Cilindro
}

double area(double largo, double ancho, double alto) {
    return 2 * (largo * ancho + largo * alto + ancho * alto); // Prisma rectangular
}
