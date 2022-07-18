#include <stdio.h>

char x[] = "\nEsta cadena se declara externamente\n";
char *ptr_x = "Esta cadena se declara externamente(ptr)\n\n";

int main ()
{
    static char y[] = "Esta cadena se declara dentro de main\n";
    char *ptr_y = "Esta cadena se declara dentro de main(ptr)\n\n";
    
    printf("%s", x);
    printf("%s", ptr_x);

    printf("%s", y);
    printf("%s", ptr_y);
    return 0;
}