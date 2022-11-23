#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  float prom; // Declarar variable

  // Solicitar al usuario ingresar un valor
  printf("Ingrese la calificacion del alumno \t ");
  scanf("%f", &prom); // Se define la variable prom
  printf("\n");       // Salto de linea

  // Condicion
  // En caso de que sea un promedio satisfactorio (mayor a 6)
  if (prom >= 6 && prom <= 10)
  {
    printf("========== \n"); // Presentacion
    printf(" Aprobado \n");  // Muestra mensaje de Aprobado
    printf("========== \n"); // Presentacion
  }
  else
  {
    if (prom >= 0 && prom < 6)
    {
      printf("=========== \n"); // Presentacion
      printf(" Reprobado \n");  // Muestra mensaje de Reprobado
      printf("=========== \n"); // Presentacion
    }
  }
  // Validacion
  // No hay calificaciones menores a 0 o mayores a 10
  if (prom < 0 || prom > 10)
  {
    printf("================================\n"); // Presentacion
    printf("Ingrese una calificacion valida \n"); // Muestra mensaje de error
    printf("================================\n"); // Presentacion
  }

  return 0;
}
