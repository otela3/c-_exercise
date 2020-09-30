#include <iostream>

using namespace std;
int main(){
    int a;
    int numeros[100];
    do
    {
        cout<<"ingresa el numero de elementos que quieres guardar";
        cin>>a;  
    } while ((a<1)||(a>100));
    for (int i = 0; i < a; i++)
    {
        cout<<"ingresa los elementos que estaran dentro del array"<<i+1<<" :";
        cin>>numeros[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout<<(i+1)<<"="<<numeros[i]<<"\n";
    }
    
    
    return 0;
}