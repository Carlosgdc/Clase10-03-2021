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
    int a;
    int b=1.99;   // Cuidado!!! El comando int solo nos declara un valor entero, por lo cual el valor de la constante b nos lo va a truncar, es decir, lo aproximara no al numero mas cercano (en este caso 2), si no al mayor de los numeros menores que el (en este caso nos lo aproximara a 1).
    std::cout<<"a: "<<a<<"\n";
    std::cout<<"b: "<<b<<"\n";
    // Ahora queremos ver cuanto es la precisión que nos puede arrojar c++ para diferenciar un numero de otro, ya que como es de suponer, poseemos un espacio limitado en la memoria por lo cual no podemos representar cada uno de los numeros reales.
    // Comencemos con la función float:
    float x=4.5; // Con float, podemos guardar un numero que no es entero con la siguiente precisión: En esta función tenemos un espacio para nuestro numero de 32 bits y se utiliza el siguiente espacio para los bits: sign mantissa *2^(exp-bias).
    //Desglozaremos lo que hemos realizado: Para expresar un numero en el computador se utiliza la notación cientifica, por lo cual "sing" corresponde al signo de nuestro numero, para lo cual se utiliza 1 bit, luego "exp" corresponde al exponente de nuestro numero para el cual se utilizan 8 bits, luego el "bias" se utiliza para que el exponente se vuelva negativo de ser necesario, por lo cual toma un valor de 127. Ya que utilizamos 8 bits en exp y 1 bit en sign; nos quedan 23 bits que son para la "mantissa" la cual es la que nos da la estructura de notación cientifica de nuestro numero.
    // Asi tenemos: sign(1) mantissa(23)*2^(exp(8)-127). Luego, puedo distingir este numero de otros en una parte de 2^23, esto nos da como resultado aproximado de 8 millones, es decir: 8*10^6. Asi podemos distingir el numero con una precisión de una parte por un millon.
    double y=-1.9e10;  // En esta precisión "double" poseemos una precisión de 64 bits, en este caso tendriamos la precisión en una parte de 10^15.
    //Utilizando la función "sizeof()" podemos conocer cuanto espacio ocupan cada una de nuestras funciones, pondremos unos ejemplos:
    std::cout<< "sizeof(int)" <<sizeof(int)<<"\n"; // Ocupa 4 bytes
    std::cout<< "sizeof(float)" <<sizeof(float)<<"\n"; // Ocupa 4 bytes
    std::cout<< "sizeof(double)" <<sizeof(double)<<"\n"; // Ocupa 8 bytes
    std::cout<< "sizeof(char)" <<sizeof(char)<<"\n"; // Ocupa 1 byte
    std::cout<< "sizeof(bool)" <<sizeof(bool)<<"\n"; // Ocupa 1 byte
    return 0;
}
