//
//  main.cpp
//  Clase10-03-2021
//
//  Created by Countyfoot on 4/3/21.
//

//Comenzamos escribiendo un programa muy basico.
#include <iostream>

int main(int argc, const char **argv)
{
   // Mostraremos como se declara una variable y como se declara e inicializa una variable.
    int a; // Aqui solo declaramos una variable.
    int b = 0; // Aqui declaramos e inicializamos una variable, es un buen habito que un programador declare e inicialice una variable ya que es un mal habito dejar una varible la cual pueda tomar cualquier valor. En programas mas complejos y complicados, este mal habito puede traer problemas.
    std::cout<<"a: "<<a<<"\n";
    std::cout<<"b: "<<b<<"\n";
    return 0;
}
// Al momento de ejecutar este programa el resultado que nos da es el siguiente:
// a: 0
// b: 0
// Lo cual es falso ya que la variable a no posee un valor especifico, este ejemplo, nos empieza a mostrar los posibles fallos que podria tener un programa mas complejo si no utilizamos buenos habitos al programar.
