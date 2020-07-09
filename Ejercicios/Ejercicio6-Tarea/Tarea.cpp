#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int suma, resta, multiplicacion;
    float division;

    cout<< "Ingrese el valor de a: " << a << endl;
    cout << "Ingrese el valor de b: " << b << endl;

    suma = a + b;
    cout << "La suma es: " << suma << endl;
    resta = a - b;
    cout << "La resta es: " << resta << endl;
    multiplicacion = a * b;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    division = a / b;
    cout << "La division es: " << division << endl;
    return 0;
}

