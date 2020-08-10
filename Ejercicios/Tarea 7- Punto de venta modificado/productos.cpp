#include <iostream>
#include "factura.h"
using namespace std;

void productos(int opcion)
{
    system("cls");
    int opcionProducto=0;

    switch (opcion)
    {
    case 1: cout<<"******************"<<endl;
            cout<<"BEBIDAS CALIENTES"<<endl;
            cout<<"******************"<<endl;
            cout<<"1-Espresso"<<endl;
            cout<<"2-Latte"<<endl;
            cout<<"3-Capuccino"<<endl;
            cout<<endl;

            cout<<"Ingrese una opcion: ";
            cin>>opcionProducto;

            switch (opcionProducto)
            {
                case 1: agregarProductos("1-Espresso L.30", 1, 30);
                break;
                case 2: agregarProductos("2-Latte L.40", 1, 40);
                break;
                case 3: agregarProductos("1-Capuccino L.45", 1, 30);
                break;
            
            default:
            {
            cout<<"opcion invalida";
                break;
            }
            }
            cout<<endl;
            cout<<"Producto agregado"<<endl;
            system("pause");
    
        break;
        case 2:  cout<<"******************"<<endl;
                 cout<<"BEBIDAS FRIAS"<<endl;
                 cout<<"******************"<<endl;
            cout<<"1-Granita de cafe"<<endl;
            cout<<"2-Granita de fruta"<<endl;
            cout<<"3-Iced"<<endl;
            cout<<endl;

            cout<<"Ingrese una opcion: ";
            cin>>opcionProducto;

            switch (opcionProducto)
            {
                case 1: agregarProductos("1-Granita de cafe L.40", 1, 40);
                break;
                case 2: agregarProductos("2-Granita de fruta L.35", 1, 35);
                break;
                case 3: agregarProductos("3-Iced L.45",1,45);
                break;
            
            default:
            {
            cout<<"opcion invalida";
                break;
            }
            }
            cout<<endl;
            cout<<"Producto agregado"<<endl;
            system("pause");
    
        break;

         case 3: cout<<"******************"<<endl;
                 cout<<"REPOSTERIA"<<endl;
                 cout<<"******************"<<endl;
            cout<<"1-Galleta de avena"<<endl;
            cout<<"2-Pastelito de piña"<<endl;
            cout<<"3-Muffin de chocolate"<<endl;
            cout<<endl;

            cout<<"Ingrese una opcion: ";
            cin>>opcionProducto;

            switch (opcionProducto)
            {
                case 1: agregarProductos("1-Galleta de avena L.15",1,15);
                break;
                case 2: agregarProductos("2-Pastelito de piña L.17",1,17);
                break;
                case 3: agregarProductos("3-Muffin de chocolate L.28",1,28);
                break;
            
            default:
            {
            cout<<"opcion invalida";
                break;
            }
            }
            cout<<endl;
            cout<<"Producto agregado"<<endl;
            system("pause");
    
        break;
        

        
    
    default: 
        break;
    }
}