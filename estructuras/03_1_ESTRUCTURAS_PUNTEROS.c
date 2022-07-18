#include <stdio.h>

typedef struct 
{
    int *ptr_num;
    float *ptr_num_f;
    char *ptr_char;
    char *string;
}datos;

datos data;

int main(){

    int num;
    float num_f;
    char caracter;
    char string[10];
    printf("Ingrese los datos:\n");
    printf("\nNumero entero: ");
    scanf("%d",&num);
    printf("\nNumero flotante: ");
    scanf("%f",&num_f);
    printf("\nCaracter: ");
    scanf(" %c",&caracter);
    printf("\nCadena de caracter: ");
    scanf("%s",string);
    
    printf("\nMuestra de datos:");
    printf("\nNumero entero: %d",*(data.ptr_num=&num));
    printf("\nNumero flotante: %.2f",*(data.ptr_num_f=&num_f));
    printf("\nCaracter: %c",*(data.ptr_char=&caracter));
    printf("\nCadena de caracteres: %s",data.string=string);

    return 0;
}