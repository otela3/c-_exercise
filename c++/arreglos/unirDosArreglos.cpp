#include <iostream>

using namespace std;
int main(){
   
    int array1[5],array2[5],array3[5],i;
    for ( i = 0; i <= 5; i++)
    {
        cout<<"ingresar los elementos del array1 \n";
        cin>>array1[i];
    }
    for ( i = 0; i <= 5; i++)
    {
        cout<<"ingresar los elementos del array2 \n";
        cin>>array2[i];
    }
    for ( i = 0; i <= 5; i++)
    {array3[i]=array1[i];}

    for ( i = 0; i <= 5; i++)
    {array3[i+5]=array2[i];}

    cout<<"el array unido es : \n";

    for ( i = 0; i <= 10; i++)
    {cout<<array3[i]<<"\n";}
    
    
    
    
    
    return 0;
}