#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero=0;
    //inicializa el numero random
    srand(time(NULL));

    for (int i=0; i<20; i++)
    {
        //genera un numero entre uno y diez
        numero=rand()%100+1;
        cout<<"Numero al azar: "<<numero<<endl;
    }
    return 0;
}
