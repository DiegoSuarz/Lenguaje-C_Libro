#include <stdio.h>
#include <math.h>

typedef union
{
    float f_exp;
    int n_exp;
}nValor;

typedef struct{
    float x;
    char indicador;

    nValor exponente;
}valores;

float potencia (valores num);

int main()
{

    valores numero;
    int i;
    float n, y;

    printf("y = x^n\n\nIntroducir un valor para x: ");
    scanf("%f", &numero.x);

    printf("\nIntroducir un valor para n: ");
    scanf("%f", &n);

    i = (int) n;
    numero.indicador = (i == n) ? 'e' : 'f';
    if (numero.indicador == 'e')
        numero.exponente.n_exp = i;
    else    
        numero.exponente.f_exp = n;

    if (numero.indicador == 'f' && numero.x <= 0.0){
        printf("\nERROR - No se puede elevar un numero no positivo a ");
        printf("una potencia de coma flotante");
    }else{
        y = potencia(numero);
        printf("\ny = %.4f", y);

    }

    return 0;
}

float potencia (valores num)
{
    float y = num.x;
    if (num.indicador == 'e'){
        if (num.exponente.n_exp == 0)
            y= 1.0;
        else{
            for(int i=1; i< abs(num.exponente.n_exp);++i)
                y *= num.x;
            if (num.exponente.n_exp < 0)
                y = 1./y;
        }
    }else
        y = exp(num.exponente.f_exp * log(num.x));

    return (y);
}