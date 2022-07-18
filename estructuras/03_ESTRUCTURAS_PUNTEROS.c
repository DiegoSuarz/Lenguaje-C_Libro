#include <stdio.h>

struct Fecha
{
    int dia;
    int mes;
    int year;
    char dia_semana[7];
}fecha, *ptr_struct = &fecha;   

struct Fecha calendario;

int main () 
{
    //formas de acceder a miembros de un arreglo mediante punteros:
    fecha.dia_semana[1] = 'L';
    ptr_struct ->dia_semana[2] = 'M';
    *((*ptr_struct).dia_semana + 4) = 'J';

    /*formas de acceder a los miembros de la estructura son equivalentes: fecha.dia , ptr_struct->mes , (*ptr_struct).year */
    printf("Ingrese la fecha de nacimiento: \n\n");
    printf("ingrese el dia: ");
    scanf("%d",&fecha.dia);

    printf("\ningrese el mes: ");
    scanf("%d",&ptr_struct->mes);

    printf("\ningrese el year: ");
    scanf("%d",&(*ptr_struct).year);
    
    printf("fecha de nacimiento: %d/%d/%d\n",fecha.dia,ptr_struct->mes,(*ptr_struct).year);
    printf("primer dia de la semana: %c\n",fecha.dia_semana[1]);
    printf("segundo dia de la semana: %c\n",ptr_struct ->dia_semana[2]);
    printf("cuarto dia de la semana: %c\n",*((*ptr_struct).dia_semana + 4));
}
    