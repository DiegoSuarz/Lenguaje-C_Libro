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

    printf("Numero de bytes (dec): %d\n", sizeof *ptr_struct);
    printf("Numero de bytes (hex): %X\n\n", sizeof *ptr_struct);

    printf("Direccion de comienzo (hex): %X\n", ptr_struct);
    printf("Direccion incrementada (hex): %X", ++ptr_struct);


}