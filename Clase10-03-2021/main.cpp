//
//  main.cpp
//  Clase10-03-2021
//
//  Created by Countyfoot on 4/3/21.
//

// Ahora, en este archivo mostraremos lo que ocurre cuando se manejan cantidades mas grandes de lo que puede diferenciar con precisión nuestras funciones. Cuando ocurre esto se conoce como overflow y underflow.
#include<iostream>

int main(int argc, char **argv)
{
    //Mostremos un overflow:
    int a=2147483647;
    std::cout<<"a: "<<a<<"\n";
    a=a+1;                      // El resultado de esta suma es -2147483647
    std::cout<<"a: "<<a<<"\n";
    //Mostraremos otro overflow:
    a=-2147483647;
    std::cout<<"a: "<<a<<"\n";
    a=a-1;                      // El resultado de esta resta es 2147483647.
    std::cout<<"a: "<<a<<"\n";
    //Mostremos un underflow:
    float x=1.0e-48;            // El resultado nos da 0.
    std::cout<<"x: "<<x<<"\n";
    //Mostraremos otro overflow:
    x=1.0e+40;                  // El resultado nos da infinito.
    std::cout<<"x: "<<x<<"\n";
}
