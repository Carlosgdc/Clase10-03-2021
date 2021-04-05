//
//  main.cpp
//  Clase10-03-2021
//
//  Created by Countyfoot on 4/3/21.
//

// Ahora, en este archivo mostraremos lo que ocurre con los caracteres especiales, los cuales nos mostraran como podemos organizar textos dependiendo del caracter especial que usemos.
#include<iostream>
#include<string>
int main(int argc, char **argv)
{
    std::cout<<"Hola\nMundo\n"; //En este caracter se comenzara desde una nueva linea la segunda palabra.
    std::cout<<"Hola\tMundo\n"; //En este caracter se realizara un tab para espaciar las dos palabras.
    std::cout<<"Hola\vMundo\n"; //En este caracter se realizara una nueva linea y un tab (vertical tab).
    std::cout<<"Hola1234\rMundo\n"; //En este caracter lee la primera palabra (Hola1234), luego se "devuelve" y reescribe por encima la palabra Mundo, dando como resultado: Mundo234.
    std::cout<<"Hola\aMundo\n";// En este caracter se realiza una alerta en forma de sonido luego de la primera palabra.
    return 0;
}
