#include <stdio.h>

/*identificadores simples que son equivalentes a expresiones,
a instrucciones completas o a grupos de instrucciones. En este
sentido se parecen a las funciones.
*/

#define area longitud * anchura

int main(){
    int longitud, anchura;
    printf("longitud=");
    scanf("%d",&longitud);
    printf("anchura= ");
    scanf("%d",&anchura);
    
    printf("\narea = %d", area);

    return 0;
}