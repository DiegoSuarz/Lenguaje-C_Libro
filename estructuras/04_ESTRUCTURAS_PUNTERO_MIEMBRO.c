#include <stdio.h>

int main ()
{

    int num = 1234;    
    char nombre[] = "Diego";
    float monto = 25.5;

    typedef struct
    {
        int dia;
        int mes;
        int year;
        char dia_semana[7];
    }fecha;

    struct cuenta
    {
        char *nombre;
        int *num_cuenta;
        float *saldo;
        fecha pago;
    }cliente, *ptr_struct = &cliente;



    cliente.num_cuenta = &num;
    cliente.nombre = nombre;
    cliente.saldo = &monto;

    printf("numero cuenta: %d",*cliente.num_cuenta);
    printf("\nnombre del usuario: %s",cliente.nombre);
    printf("\nsaldo disponible: %.2f",*cliente.saldo);

    printf("\n\nnumero cuenta: %d",*ptr_struct->num_cuenta);
    printf("\nnombre del usuario: %s",ptr_struct->nombre);
    printf("\nsaldo disponible: %.2f",*ptr_struct->saldo);

    printf("\n\nnumero cuenta: %d",*(*ptr_struct).num_cuenta);
    printf("\nnombre del usuario: %s",(ptr_struct)->nombre);
    printf("\nsaldo disponible: %.2f",*(*ptr_struct).saldo);


    return 0;
}