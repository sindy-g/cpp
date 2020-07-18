#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	 double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento= 0;
    double calculoDescuento=0;
    double calculoImpuesto=0;
    char exenta;
    
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout<<"Ingrese el descuento ( 0, 10, 15, 20): ";
    cin>> descuento;
    
    cout<< "Es factura exenta? Escriba s o n: " << exenta;
    cout<< endl;

    calculoDescuento=(subtotal*descuento)/100;
    calculoImpuesto = (subtotal - calculoDescuento)*0.15;
    total = subtotal - calculoDescuento + calculoImpuesto; 
    
    if (exenta == 's' || exenta == 'S' ){
        total = subtotal - calculoDescuento;
        cout<< "El total a pagar es: "<< total;
    } else{
        if (exenta==  'n' || exenta == 'N'  ){
        total=subtotal - calculoDescuento+calculoImpuesto;
        cout<< "El total a pagar es: "<< total;
        }
        
    }
   
cout<< endl;
cout << " Total a pagar es: "<< total<<endl;


    return 0;
}
