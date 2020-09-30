//operaciones aritmeticas

#include <iostream>

int main(){

    int a, b, c, d, e;
    float f;

    std::cout <<  "ingresa un numero: ";
    std::cin >> a;
    std::cout <<  "ingresa otro numero: ";
    std::cin >> b;
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    std::cout << "la suma es: ";
    std::cout << c;
    std::cout << "\n";
    std::cout << "la resta es: ";
    std::cout << d;
    std::cout << "\n";
    std::cout << "la multiplicacion es: ";
    std::cout << e;
    std::cout << "\n";
    std::cout << "la division es: ";
    std::cout << f;
    std::cout << "\n";
}