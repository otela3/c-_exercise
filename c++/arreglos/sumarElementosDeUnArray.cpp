#include <iostream>

using namespace std;
int main(){
    int numeros[]={1,2,3,4,5},suma=0;
    for (int i = 0; i <= 4; i++)
    {
       suma = numeros[i]+suma;
    }
    cout<<suma<<"\n";
    
}