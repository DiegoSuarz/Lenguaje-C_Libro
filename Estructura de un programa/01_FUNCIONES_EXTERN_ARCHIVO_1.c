#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "01_FUNCIONES_EXTERN_ARCHIVO_2.h"

#define SEMILLA 12345



int main ()
{
    char respuesta = 'S';

    printf("Bienvenido al juego CRAPS\n\n");
    printf("Para lanzar los dados, pulsa Intro\n\n");

    srand(SEMILLA);

    while( toupper(respuesta) != 'N')
    {
        juego();
        printf("\nDesea jugar de nuevo? (S/N) ");
        scanf(" %c", &respuesta);
        printf("\n");
    }
    printf("Adios, que lo pases bien");
    return 0;
}