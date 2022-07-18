#include <stdio.h>

float* ptr_funcion_Sumar (float array1[], float array2[], int tam);
    
int* ptr_funcion_Sumar1 (int num1, int num2);


int main ()
{
    int n = 5, a=2, b=5;
    float arr1[]={1.2, 5.4, 5.2, 5.3, 4.3};
    float arr2[]={7.2, 3.4, 1.2, 7.3, 1.3};
    
    float *res;
    int *res1;

    res = ptr_funcion_Sumar(arr1,arr2,n);
    for (int i= 0; i<n; i++){
            printf("%.2f\n",*(res+i));
    }

    res1 = ptr_funcion_Sumar1(a,b);
    printf("\n%d",*res1);
    return 0;
}

float* ptr_funcion_Sumar (float array1[], float array2[], int tam){
    static float resultado[10];
    
    for(int i=0;i<tam;i++){
        resultado[i] = array1[i] + array2[i];
    }
    return resultado; //los array no es necesario que lleven el operador direccion "&"

}

int* ptr_funcion_Sumar1 (int num1, int num2){
    static int resultado;
    
        resultado = num1 + num2;

    return &resultado;

}