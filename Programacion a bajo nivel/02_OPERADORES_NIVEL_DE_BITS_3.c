/*OPERADORES DE DESPLAZAMIENTO: 
    Existen 2 operadores de desplazamiento a la izquierda (<<) se perderan los bits (msb, desbordamiento) y
    se rellenaran con 0 los bits (lsb).
        
    y desplazamiento a la 
    derecha (>>), se perderan los bits (lsb, underflow), se rellenar dependiendo del compilador con 1 o 0 los bits msb,
    si el bit msb es 1, se rellenan con 1, si es 0, se rellenan con ceros, pero depende del compilador.

*/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t    a = 0x0FF0;
    uint16_t    b = 0x8FF0;
    printf("el numero original es: 0x0%X, despues del desplazamiento es: 0x%X\n",(uint16_t)a,(uint16_t)(a<<4));
    printf("el numero original es: 0x0%X, despues del desplazamiento es: 0x00%X\n",(uint16_t)a,(uint16_t)(a>>4));
    printf("el numero original es: 0x0%X, despues del desplazamiento es: 0x0%X\n",(uint16_t)a,(uint16_t)(b>>4));
    return 0;
}