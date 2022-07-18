/*
    operador complemento a uno (~) invierte los bits de su operando, pasa los ceros a unos y viceversa
*/

#include <stdio.h>
#include <stdint.h>

int main ()
{
    uint16_t i = 0xFF00;
    printf("valores hexadecimales: i = 0x%.4X   ~i = 0x%.4X\n",i, (uint16_t)~i);
    printf("decimales equivalentes: i = %4u  ~i = %4u",i,(uint16_t)~i);

    return 0;
}
