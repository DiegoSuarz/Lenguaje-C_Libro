#include <stdio.h>

void funcion1( int u, int v);
void funcion2( int *ptr_u, int *ptr_v);

int main(){
    int u = 1;
    int v = 3;
    printf("\nAntes de la llamada a funcion1: u=%d  v=%d", u, v);
    funcion1( u, v);
    printf("\nDespues de la llamada a funcion1: u=%d    v=%d", u, v);
    
    printf("\nAntes de la llamada a funcion2: u=%d  v=%d", u, v);
    funcion2( &u, &v);
    printf("\nDespues de la llamada a funcion2: u=%d    v=%d", u, v);
    return 0;
}

void funcion1( int u, int v){
    u=0;
    v=0;
    printf("\nDentro de funcion1:   u=%d    v=%d",u ,v);
    return;
}

void funcion2( int *ptr_u, int *ptr_v){
    *ptr_u = 0;
    *ptr_v = 0;
    printf("\nDentro de funcion2:   *ptr_u=%d    *ptr_v=%d",*ptr_u,*ptr_v);
    return;
}
