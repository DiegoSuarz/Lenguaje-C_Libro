#include <stdio.h>
#include <stdlib.h>
#include "01_FUNCIONES_EXTERN_ARCHIVO_2.h"


    int puntos1, puntos2;
    char nada;
    
extern void juego(void){

    
    printf("\nPor favor lanza los dados...");
    scanf("%c",&nada);
    prinft("\n");
    puntos1 = tirada();
    printf("\n%2d",puntos1);

    switch (puntos1)
    {
        case 2:
        case 3:
        case 11: printf("- ¡Felicidades! Ganaste en la primera tirada\n"); break;
        case 12: printf("- ¡Lo siento! - PERDISTE en la primera tirada\n"); break;
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
            do{

                printf("- Lanza los datos de nuevo...");
                scanf("%c", &nada);
                puntos2 = tirada();
                printf("\n%2d", puntos2);

            } while (puntos2 != puntos1 && puntos2 != 7);
            
            if (puntos2 == puntos1)
                printf(" - Ganas por igualar tu primera puntuacion\n");
            else    
                printf(" - PIERDES por no igualar tu primera puntuacion\n");
            break;
    }
     return;
}

static int tirada(void)
{
    float x1, x2;
    int n1, n2;

    x1 = rand() / 32768.0;
    x2 = rand() / 32768.0;

    n1 = 1 + (int) (6 * x1);
    n2 = 1 + (int) (6 * x2);

    return(n1 + n2);
}