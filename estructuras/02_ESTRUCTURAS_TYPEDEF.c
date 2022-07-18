#include <stdio.h>

struct fecha
{
    int mes;
    int dia;
    int year;
};

struct fecha nombre;

 
typedef struct
{
    int mes;
    int dia;
    int year;
}nombre1;   

nombre1 fecha;

int main () 
{
    printf("fecha de nacimiento: %d/%d/%d\n",nombre.dia=12,nombre.mes=7,nombre.year=1991);
    printf("fecha de bautismo: %d/%d/%d\n",fecha.dia = 5,fecha.mes = 9, fecha.year = 1991);
}
    