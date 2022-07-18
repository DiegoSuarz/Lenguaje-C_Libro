#include <stdio.h>

int main (){
    int u1, u2;
    int v = 3;
    int *ptr_v;  //puntero que apunta a v

    u1 = 2 * (v + 5);   //expresion ordinaria
    ptr_v = &v;
    u2 = 2 * (*ptr_v + 5);
    printf("\nu1 = %d   u2= %d", u1, u2);
    return 0;
}