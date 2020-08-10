#include <iostream>
using namespace std;

double subtotal;
double total;
double impuesto;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos=listaProductos+descripcion+'\n';
    subtotal=subtotal+(cantidad*precio);
    impuesto=subtotal*0.15;
    total=subtotal+impuesto;
}
void imprimirFactura()
{
    system("cls");
    cout<<"********"<<endl;
    cout<<"Factura"<<endl;
    cout<<"********"<<endl;

    cout<<"Productos: "<<endl;
    cout<<listaProductos;
    cout<<endl;
    cout<<"Subtotal es: "<<subtotal;
    cout<<endl;
    cout<<"Impuesto es: "<<impuesto;
    cout<<endl;
    cout<<"Total es: "<<total;
    cout<<endl;
    system("pause");

}

