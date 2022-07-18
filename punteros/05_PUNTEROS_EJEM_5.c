#include <stdio.h>
#include <stdlib.h>

int main () 
{
    char concepto[20];
    int num_partida;
    float coste;
    float array[100];

    printf("Ingrese el concepto: \n");
    scanf("%s", concepto);  //la variale concepto no necesita de "&" ya que es un variable tipo arreglo de caracteres
    printf("Ingrese el numero de partida: \n");
    scanf("%d", &num_partida);
    printf("Ingrese el coste: \n");
    scanf("%f", &coste);
    printf("Ingrese un valor al arreglo Z: \n");
    scanf("%f", &array[50]); //el arreglo array necesita de "&" ya solo se esta accediendo a un miembro del arreglo y no a todos.

    printf("\nEl concepto es: %s", concepto);
    printf("\nEl numero de partida es: %d", num_partida);
    printf("\nEl coste es: %.2f",coste);
    printf("\nEl valor del arreglo Z es: %.2f",array[50]);
    printf("\n");
    system("pause");
}