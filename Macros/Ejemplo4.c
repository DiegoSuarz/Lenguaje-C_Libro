#include <stdio.h>

#define calculo(n1,n2,r)    numerador = n1 + n2;                \
                            razon = numerador/r;                 \
                            printf("El calculo es: %d",razon);

int main(){

    int numerador, razon, numero1, numero2;
    printf("escriba el numero1: ");
    scanf("%d",&numero1);
    printf("escriba el numero2: ");
    scanf("%d",&numero2);
    printf("escriba la razon: ");
    scanf("%d",&razon);

    calculo(numero1,numero2,razon);
    
    return 0;
}