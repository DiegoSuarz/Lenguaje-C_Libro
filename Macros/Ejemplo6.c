#include <stdio.h>

// # es el operador cadena, ## es el operador de concatenación
#define muestra(i,x)  printf("x" #i " = %d\n", i##x)
                // i=3
                //  printf("x3 =%d\n",x3)
int main(){
    int numero,x,numerox;
    printf("indique en numero ");
    scanf("%d",&numero);
    muestra(numero,x);

    return 0;
}
