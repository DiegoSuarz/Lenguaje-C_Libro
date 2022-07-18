/*Los campos de bits se definen como miembros de una estructura, y cada
campo puede ser accedido individualmente, como cualquier otro miembro 
de una estructura*/

#include <stdio.h>
#include <stdint.h>
int main ()
{

    static struct {
        uint16_t a : 5; /* principio primera palabra  5 bits*/
        uint16_t b : 5; /*10 bits ¨*/
        uint16_t c : 5; /*15 bits  */
        uint16_t d : 5; /*segunda palabra 20 bits*/ //se requiere 4 bytes para almacenar 20 bits
    } v = {1, 2, 3, 4};

    printf("v.a = %d    v.b = %d    v.c = %d    v.d = %d\n",v.a, v.b, v.c, v.d);
    printf("v requiere %d bytes\n",sizeof(v));   
    return 0;
}