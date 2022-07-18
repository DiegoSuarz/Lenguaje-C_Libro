/* Las uniones contienen miembros cuyos tipos de datos pueden ser diferentes, sin embargo, los
miembros que lo componen comparten el mismo area de almacenamiento detro de la memoria 
Son muy utiles al momento de ahorrar memoria
*/

#include <stdio.h>

int main()
{
    union id{
        char color[12];
        int talla;
    };

    struct ropa{
        char fabricante[20];
        float coste;
        union id descripcion;
    };

    static struct ropa camisa = {"Americana",24.00,"blanca"};
  

    printf("%d\n",sizeof (union id));

    /* asignar un valor a color*/
    
    printf("%s  %5.2f   ",camisa.fabricante,camisa.coste);
    printf("%s  %d\n",camisa.descripcion.color,camisa.descripcion.talla);
    /* asignar un valor a talla*/
    camisa.descripcion.talla = 12;
    printf("%s  %5.2f   ",camisa.fabricante,camisa.coste);
    printf("%s  %d\n",camisa.descripcion.color,camisa.descripcion.talla);
    
    return 0;
}