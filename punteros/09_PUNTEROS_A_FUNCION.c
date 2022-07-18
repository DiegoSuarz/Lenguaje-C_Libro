#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void tabla( int (*ptr_funcion)(int m, int n), int i); // int (*ptr_funcion)(int m, int n)  es un puntero a funcion
int tabla_x2( int a, int b);
int tabla_x3( int a, int b);
int tabla_x4( int a, int b);

int main()
{
   
    int a,b;
    int i;
    printf("ingrese la tabla de multiplicar: ");
    scanf("%d",&i);
    if(i==2){
        printf("\nEscogio la tabla x 2\n");
        tabla(&tabla_x2,i);                 //apunta a la direccion de la funcion tabla_x2
    }else if(i==3){
        printf("\nEscogio la tabla x 3\n");
        tabla(&tabla_x3,i);                 //apunta a la direccion de la funcion tabla_x3

    }else if(i==4){
        printf("\nEscogio la tabla x 4\n");
        tabla(&tabla_x4,i);                 //apunta a la direccion de la funcion tabla_x4
    
    }else{
        printf("\nValor incorrecto");
        
    }
    return 0;
}


void tabla( int (*ptr_funcion)(int m, int n), int i)
{
    int res;
    for(int cont=1; cont<=12; cont++ ){
        res = (*ptr_funcion)(cont,i);
        printf("    %2dx%d  =   %2d\n", cont ,i,res);
    }
    return;
}



int tabla_x2( int a, int b){
    int r;
    r = a * b;
    return (r);
}
int tabla_x3( int a, int b)
{
    int r;
    r = a * b;
    return (r);

}

int tabla_x4( int a, int b)
{
    int r;
    r = a * b;
    return (r);

}