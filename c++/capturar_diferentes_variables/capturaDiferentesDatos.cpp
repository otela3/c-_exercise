#include <iostream>

int main(){

 //definicion de vriables
    char sexo[10];
    int edad;
    float estatura;

//ingreso de los datos
    std::cout<< "ingresa tu sexo: ";
    std::cin>>sexo;
    std::cout<<"ingresa tu edad: ";
    std::cin>>edad;
    std::cout<< "ingresa tu estatura: ";
    std::cin>>estatura;

//mostrar los datos por consola
    std::cout<<sexo<<"\n";
    std::cout<<edad<<"\n";
    std::cout<<estatura<<"\n";

//cierre del programa
    system("pause");
    return 0;
}