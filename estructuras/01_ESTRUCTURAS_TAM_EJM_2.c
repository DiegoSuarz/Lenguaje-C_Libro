
#include <stdio.h>

int main(){

struct fecha
    {
        int mes;
        int dia;
        int year;
    };
    
    struct cuenta
    {
        char nombre[80];
        char calle[80];
        char ciudad[80];
        float monto;
        struct fecha nacimiento;
        struct fecha pago;
    } cliente;

    printf("%d\n", sizeof (cliente));
    printf("%d",sizeof (struct cuenta));

    /* sizeof se usa para determinar el numero de bytes asociados a la variable de estructura cliente que es equivalente a estructura cuenta

    return 0;
}