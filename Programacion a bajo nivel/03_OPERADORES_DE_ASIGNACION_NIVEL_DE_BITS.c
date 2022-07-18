/*LOS OPERADORES DE ASIGNACION A NIVEL DE BITS SON LOS SIGUIENTES:
&=  ,  ^=   , |=    , <<=   , >>=
*/

#include <stdio.h>
#include <stdint.h>

int main ()
{
    int a, b, m, cont , nbits;
    unsigned mascara;

    nbits = 8 * sizeof(int);
    m = 0x1 << (nbits - 1);
    
    do{
        printf("\n\nIntroducir un valor entero (0 para parar): ");
        scanf("%d",&a);

        mascara = m;
        for(cont = 1; cont <= nbits ; cont++){
            b= (a & mascara) ? 1 : 0;
            printf("%x", b);
            if (cont % 4 == 0)
                printf(" ");
            mascara >>= 1;
        }

    } while ( a != 0);


    return 0;
}