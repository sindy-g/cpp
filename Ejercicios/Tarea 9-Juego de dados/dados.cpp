#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int dado1=0;
    int dado2=0;
    int resultadoDados=0;

    srand(time(NULL));
    system ("cls");

    dado1=rand()%6+1;
    cout<<"Primer dado: "<<dado1<<endl;
    dado2=rand()%6+1;
    cout<<"Segundo dado: "<<dado2<<endl;

    resultadoDados=dado1+dado2;
    cout<<"El resultado es: "<<resultadoDados<<endl;
    return 0;
}

