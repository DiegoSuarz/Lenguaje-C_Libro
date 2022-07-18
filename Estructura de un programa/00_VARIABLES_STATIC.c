/* las varibles tipo static son de ambito local y tiene la caracteristica de conservar su ultimo valor tras salir de
la función en la cual estan invocadas y no se pueden acceder a ellas desde fuera de otra funcion de donde esten definidas
y solo estan disponibles en el archivo donde esta implementado, en otros archivos fuente o hearders no estaran disponibles.
*/

/*Programa para calcular numeros de Fibonacci sucesicos*/

#include <stdio.h>

long int fibonacci (int cont);

int main()
{
    int cont, n;
    
    printf("¿Cuantos numeros de Fibonacci? ");
    scanf("%d", &n);
    printf(" \n");

    for (cont = 1; cont <= n; ++cont)
        printf("\ni = %2d   F = %1d", cont, fibonacci(cont));
    
    return 0;
}

long int fibonacci (int cont)
{
    /* calcular un numero de Fibonacci usando las fórmulas
    F = 1  para i<3, F = F1 + F2 para i>=3*/

    static long int f1 = 1, f2 = 1; //al salir de la fucion las varibles no se destruyen, sino conservan su ultimo valor antes de salir de la función
    long int f;

    f = (cont < 3) ? 1 : f1 + f2;
    f2 = f1;
    f1 = f;
    return (f);
}