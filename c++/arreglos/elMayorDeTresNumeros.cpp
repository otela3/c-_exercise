#include <iostream>


using namespace std;
int main(){
    int a,numeros[100],mayor=0;
    do
    {
        cout<<"ingresar la cantidad de elementos que quieres guardar"<<"\n";
        cin>>a;
    } while ((a<1)||(a>100));
    for (int i = 0; i < a; i++){
        cout<<"ingresa los elementos que quieres guardar"<<i+1<<" :";
        cin>>numeros[i];
    }
    for (int i = 0; i < a; i++){
        if (numeros[i]>mayor){
            mayor=numeros[i];
        }
        
    }
    
    
    

    return 0;
}