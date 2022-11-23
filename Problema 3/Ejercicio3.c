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

  // Condicion
  // Cuando el precio sea mayor a 0 y menor que 1500
  if (precio > 0 && precio < 1500)
  {
    importe = precio * .11;                                                                         // Operacion para sacar el 11% del precio ademas se define la variable importe
    final = importe + precio;                                                                       // Operacion para obtener el precion final del producto, se define la variable final
    printf("===========================================================================\n");        // Presentacion
    printf(" El precio final del producto con un incremento del 11 por ciento es: %.2f \n", final); // Muestra el precio final con el incremento
    printf("===========================================================================\n");        // Presentacion
  }
  // Si no
  else
  {
    // Validacion
    // Cuando el precio sea menor o igual a 0
    if (precio <= 0)
    {
      printf("================================================\n"); // Presentacion
      printf(" Favor de colocar bien el precio del producto\n");    // Muestra mensaje de error
      printf("================================================\n"); // Presentacion
    }
    // Si no
    // En caso de que el precio sea mayor o igual a 1500
    else
    {
      printf("=======================================================\n");      // Presentacion
      printf(" El precio %.2f es aceptable y no se le incrementara\n", precio); // Muestra mensaje
      printf("=======================================================\n");      // Presentacion
    }
  }

  return 0;
}
