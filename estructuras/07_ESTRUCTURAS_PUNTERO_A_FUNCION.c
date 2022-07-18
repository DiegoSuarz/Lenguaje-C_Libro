#include <stdio.h>
#include <string.h>

typedef struct
{
    char *nombre;
    char apellido[10];
    float altura;
    int edad;
    float *peso;
    char sexo;
    int *year;
} cliente;

void ajustar_datos(cliente *ptr); 

cliente datos;

int main ()
{

    char *nombre_u="Diego";
    char apellido_u[10]="Suarez";
    float alt_u = 1.73;
    int edad_u = 22;
    float peso_u = 62.3;
    char sexo_u = 'M';
    int year_u = 2000;


    datos.nombre = nombre_u;
    strcpy (datos.apellido,apellido_u);  //copiar de cadena a otra cadena
    datos.altura = alt_u;
    datos.edad = edad_u;
    datos.peso = &peso_u;
    datos.sexo = sexo_u;
    datos.year = &year_u;

    printf("Datas del usuario antes de entrar a la funcion: \n");
    printf("\nnombre del usuario: %s",datos.nombre);
    printf("\nApellido del usuario: %s",datos.apellido);
    printf("\nAltura del usuario: %.2f",datos.altura);
    printf("\nedad del usuario: %d",datos.edad);
    printf("\nPeso del usuario: %.2f",*datos.peso);
    printf("\nSexo del usuario: %c",datos.sexo);
    printf("\nNacimiento del usuario: %d",*datos.year);

    ajustar_datos(&datos);

    printf("\nDatas del usuario despues de entrar a la funcion: \n");
    printf("\nnombre del usuario: %s",datos.nombre);
    printf("\nApellido del usuario: %s",datos.apellido);
    printf("\nAltura del usuario: %.2f",datos.altura);
    printf("\nedad del usuario: %d",datos.edad);
    printf("\nPeso del usuario: %.2f",*datos.peso);
    printf("\nSexo del usuario: %c",datos.sexo);
    printf("\nNacimiento del usuario: %d",*datos.year);

      return 0;
}

void ajustar_datos(cliente *ptr){

    char apell[10]="Inocente";

    ptr->nombre = "Andrea";
    strcpy (ptr->apellido,apell);  //copiar de cadena a otra cadena
    ptr->altura = 1.80;
    ptr->edad = 30;
    *(ptr->peso) = 80;
    ptr->sexo = 'F';
    *(ptr->year) = 1991;
    return;
}