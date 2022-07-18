/* OPWERADORES LOGICOS A NIVEL DE BITS: 
Existen 3 operadores a nivel de bits &(and),^(xor),|(or)
*/
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a=0xF0, b=0xFF, res;
    printf(" a & b = 0x%X\n",(uint8_t)a&b);
    printf(" a | b = 0x%X\n",(uint8_t)a|b);
    printf(" a ^ b = 0x0%X\n",(uint8_t)a^b);
    return 0;
}
