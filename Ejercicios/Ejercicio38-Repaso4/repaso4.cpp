#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    for (int i=5; i<=100; i=i+5){
        cout<<i<<endl;

        for(int j=1; j<=5; j++){
           cout<< j<<endl;
        }
        for(int k=1; k<=3; k++){
           cout<< k<<endl;
           if(i==25){
               break;
           }
        }
        if(i==25){
            break;
        }
       
        

    }

    int i=5;
    while (i<=100)
    {
        cout<< i<<endl;
        i=i+5;
        int j=0;
        while (j<=5)
        {
            if(i==25){
                break;
            }  j++;
        }
        if(i==25){
            break;
        }
    }
    return 0;
}
