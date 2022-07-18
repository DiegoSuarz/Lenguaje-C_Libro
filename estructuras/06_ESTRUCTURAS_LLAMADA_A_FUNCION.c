#include <stdio.h>


float total_pago(float saldo_u, float monto_u);

int main()
{
    typedef struct {
        char nombre[20];
    }datos;

    struct {
        float monto;
        float saldo;
        float vuelto;
        datos data;
    }cliente;

    printf("ingrese el nombre del usuario: ");
    scanf(" %[^\n]",cliente.data.nombre);

    printf("\nIngrese el saldo del usuario: ");
    scanf("%f",&cliente.saldo);
    
    printf("\n\nIngrese el monto a pagar: ");
    scanf("%f",&cliente.monto);
  

    cliente.vuelto = total_pago(cliente.saldo , cliente.monto);

    printf("\n\nEl vuelto es: %.2f",cliente.vuelto);

    return 0;
}


float total_pago(float saldo_u, float monto_u)
{
    float res;
    res = saldo_u - monto_u;
    return (res);
}