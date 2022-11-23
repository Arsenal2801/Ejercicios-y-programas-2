#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  float precio, importe, final; // Declarar variables como reales

  // Solicitar al usuario ingresar un valor
  printf("Ingrese el precio del producto importado \t");
  scanf("%f", &precio); // Se define el valor de la variable precio
  printf("\n");         // Salto de linea

  do // Hacer siguientes lineas de instrucciones (16-46)
  {
    if (precio > 0 && precio < 1500)
    {
      importe = precio * .11;                                                                         // Operacion para sacar el 11% del precio ademas se define la variable importe
      final = importe + precio;                                                                       // Operacion para obtener el precion final del producto, se define la variable final
      printf("===========================================================================\n");        // Presentacion
      printf(" El precio final del producto con un incremento del 11 por ciento es: %.2f \n", final); // Muestra el precio final con el incremento
      printf("===========================================================================\n");        // Presentacion
      printf("Ingrese el precio del producto importado (0 para terminar) \t");                        // Solicitar al usuario ingresar un valor
      scanf("%f", &precio);                                                                           // Se define el valor de la variable precio
    }
    // Condicion
    // En caso de que el precio sea mayor o igual a 1500
    if (precio > 1500)
    {
      printf("=======================================================\n");      // Presentacion
      printf(" El precio %.2f es aceptable y no se le incrementara\n", precio); // Muestra mensaje
      printf("=======================================================\n");      // Presentacion
      printf("Ingrese el precio del producto importado (0 para terminar) \t");  // Solicitar al usuario ingresar un valor
      scanf("%f", &precio);                                                     // Se define el valor de la variable precio
    }
    // Condicion
    // En caso de que el precio sea menor a 0
    if (precio < 0)
    {
      printf("================================================\n");            // Presentacion
      printf(" Favor de colocar bien el precio del producto\n");               // Muestra mensaje de error
      printf("================================================\n");            // Presentacion
      printf("Ingrese el precio del producto importado (0 para terminar) \t"); // Solicitar al usuario ingresar un valor
      scanf("%f", &precio);                                                    // Se define el valor de la variable precio
    }

  } while (precio != 0); // Mientras precio sea diferente de 0 realizar las instrucciones anteriores en do (15-46)
}
