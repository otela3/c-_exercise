#include <iostream>

using namespace std;
int main(){
    int matriz[100][100],copiaMatriz[100][100],filas,columnas;
    cout<<"ingresa la cantidad de filas que tendra la matriz: ";
    cin>>filas;
    cout<<"ingresa la cantida de columnas que tendra la matriz: ";
    cin>>columnas;
    for (int i = 0; i < filas; i++)
    {
       for (int j = 0; j < columnas; j++)
       {
           cout<<"ingresa el valor de la posicion: "<<i<<","<<j<<": ";
           cin>>matriz[i][j];
           copiaMatriz[i][j]=matriz[i][j];
       }
       
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<"   ";
            cout<<copiaMatriz[i][j]<<"   ";

        }
        cout<<"\n";
    }
    cout<<"\n\n";
    
    return 0;
}
