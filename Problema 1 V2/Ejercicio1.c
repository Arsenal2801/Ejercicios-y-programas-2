#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int NUM;           // Declarar variable como entero
    long CUA, SUC = 0; // Declarar variables como long

    // Solicitar al usuario ingresar un valor
    printf("\n Ingrese un numero entero (0 para terminar): \t");
    scanf("%d", &NUM); // Define el valor de la variable NUM

    // Estructura repititiva do-while
    do // Hacer siguientes lineas de instrucciones (16-22)
    {
        CUA = pow(NUM, 2);                                           // Se eleva al cuadrado NUM y se define la variable CUA
        printf("%d al cuadrado es %ld", NUM, CUA);                   // Muestra el valor del cuadrado
        SUC = SUC + CUA;                                             // Suma el valor del cuadrado y se define la variable SUC
        printf("\n Ingrese un numero entero (0 para terminar) :\t"); // Solicita al usuario ingresar otro valor
        scanf("%d", &NUM);                                           // Define el valor de la variable NUM
    } while (NUM);                                                   // Mientras NUM sea diferente de 0 realizar las instrucciones anteriores en do (15-22)
    printf("\n La suma de los cuadrados es %ld", SUC);               // Muestra la suma de todos los cuadrados de los numeros ingresados

    return 0;
}
