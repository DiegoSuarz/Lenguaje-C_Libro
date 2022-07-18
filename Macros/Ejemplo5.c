#include <stdio.h>
#include <math.h>

#define raiz(a,b)   sqrt((a)*(a) + (b)*(b))

int main(){

    int numero1,numero2;
    float resultado;

    printf("Ingrese el numero 1: ");
    scanf("%d",&numero1);
    printf("Ingrese el numero 2: ");
    scanf("%d",&numero2);

    resultado = raiz(numero1,numero2);
    printf("El resultado es: %.2f",(float)resultado);
    
}