//
//  main.cpp
//  Clase10-03-2021
//
//  Created by Countyfoot on 4/3/21.
//

// Ahora, en este archivo mostraremos lo que ocurre con la función string, en este caso esta función guarda cadenas, donde las cadenas son un arreglo de caracteres especifico, la función string tiene la ventaja que se puede combinar con otras cadenas que hayamos especificado.
#include<iostream>
#include<string>
int main(int argc, char **argv)
{
    std::string name = "Carlos German";
    std::string lastname = "Diaz";
    std::string fullname = name + " " + lastname;
    std::cout<<"fullname: "<<fullname<<"\n";        //El resultado de estas instrucciones es la siguiente: fullname: Carlos German Diaz.
    std::cout<< fullname[0] <<"\n";   //Lo que ocurrira es que se imprimira solo la primera letra de nuestra cadena, cada caracter ira con un digito asignado, comenzando desde 0. Por lo cual, en este caso el resultado que nos botara sera: C.
    std::cout<< fullname[3] <<"\n";   //Lo que nos botara en este caso corresponde a la cuarta letra de nuestra cadena, es decir: L.
    std::cout<<"\n";
    //Ahora crearemos una función en la cual imprimamos uno por uno los caracteres de nuestra cadena.
    for(int ii=0;ii<fullname.size(); ii=ii+1)
    {
        std::cout<<fullname[ii]<<"\n";
    }
    std::cout<<"\n";
    //Ahora crearemos una función en la cual imprimamos uno por uno los caracteres de nuestra cadena desde atras hacia adelante, es decir, nuestra cadena quedara escrita al reves.
    for(int ii=fullname.size()-1; ii>=0; ii=ii-1)
    {
        std::cout<<fullname[ii]<<"\n";
    }
    return 0;
}
