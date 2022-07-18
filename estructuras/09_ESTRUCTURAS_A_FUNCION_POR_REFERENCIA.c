#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int anio;
}fecha;

typedef struct
{
    char nombre[20];
    char apellido[20];
    float altura;
    int edad;
    float peso;
    char sexo;
    fecha datoFecha;
} registro;

registro *leer_datos(int i);

void visualizar_datos(registro *clienteDatos); 

int main ()
{

    int i,n;

    registro cliente[100];   //declarando un array de estructuras 

    printf("Sistema de facturacion de clientes\n");
    printf("Ingrese la cantidad de clientes: ");
    scanf("%d",&n);

    for( i = 0; i < n; ++i){
        cliente[i] = *leer_datos(i);
    }

    printf("\nDatos de Usuarios: \n");
    for( i = 0; i < n; ++i){
        visualizar_datos(&cliente[i]);
    }
   
}

registro *leer_datos(int i){

    static registro cliente;
    
    
    printf("\nCliente N: %d\n",i+1);
    printf("nombre: ");
    scanf(" %[^\n]",cliente.nombre);
    printf("\nApellido: ");
    scanf(" %[^\n]",cliente.apellido);
    printf("\nAltura: ");
    scanf("%f]",&cliente.altura);
    printf("\nEdad: ");
    scanf("%d]",&cliente.edad);
    printf("\nPeso: ");
    scanf("%f",&cliente.peso);
    printf("\nSexo: ");
    scanf(" %c",&cliente.sexo);
    printf("\nDia: ");
    scanf("%d",&cliente.datoFecha.dia);
    printf("\nMes: ");
    scanf("%d",&cliente.datoFecha.mes);
    printf("\nYear: ");
    scanf("%d",&cliente.datoFecha.anio);

    return (&cliente);

}

void visualizar_datos(registro *clienteDatos){

    printf("\nnombre del usuario: %s",clienteDatos->nombre);
    printf("\nApellido del usuario: %s",clienteDatos->apellido);
    printf("\nAltura del usuario: %.2f",clienteDatos->altura);
    printf("\nedad del usuario: %d",clienteDatos->edad);
    printf("\nPeso del usuario: %.2f",clienteDatos->peso);
    printf("\nSexo del usuario: %c",clienteDatos->sexo);
    printf("\nFecha: %d/%d/%d",clienteDatos->datoFecha.dia,clienteDatos->datoFecha.mes,clienteDatos->datoFecha.anio);

    return;
}