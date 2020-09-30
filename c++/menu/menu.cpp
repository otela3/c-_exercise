#include <iostream>

int main(){
    using namespace std;
    int opciones;

    cout<<"-----menu-----"<<"\n";
    cout<<"1.- nueva partida"<<"\n";
    cout<<"2.- continuar"<<"\n";
    cout<<"3.- opciones"<<"\n";
    cout<<"4.- exit"<<"\n";
    cout<<"-----menu-----"<<"\n";

    cin>>opciones;

    switch (opciones){

    case 1:
    cout<<"has iniciado una nueva partida"<<"\n";
        break;
    case 2:
    cout<<"continuaras donde lo dejaste"<<"\n";
        break;
    case 3:
    cout<<"opciones"<<"\n";
        break;
    case 4:
    cout<<"estas seguro que quieres salir?"<<"\n";
        break;
    default:
        cout<<"error";
        break;
    
    }

    return 0;
}