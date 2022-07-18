#include <stdio.h>

int main () {

    int linea[80];
    int *p1;

    printf("ingrese el valor Linea[1]: ");
    scanf("%d",&linea[1]);
    linea[2] = linea[1];
    printf("\n linea[2]: %d",linea[2]);

    linea[2] = *(linea + 1);
    printf("\n linea[2]: %d",linea[2]);

    *(linea + 2) = linea[1];
    printf("\n *(linea + 2): %d",linea[2]);

    *(linea + 2) = *(linea + 1);
    printf("\n *(linea + 2): %d",linea[2]);


    p1 = &linea[1];
    linea[2] = *p1;
    printf("\n p1=%d    *(linea + 2): %d",p1,linea[2]);

    p1 = linea + 1;
    *(linea + 2) = *p1;
    printf("\n p1=%d    *(linea + 2): %d",p1,linea[2]);

    return 0;
}