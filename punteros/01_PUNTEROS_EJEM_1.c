#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int u = 3;
    int v;

    int *ptr_u;
    int *ptr_v;

    ptr_u = &u;
    v = *ptr_u;
    ptr_v = &v;

    printf("\nu=%d  &u=%X   ptr_u=%X    *ptr_u=%d",u,&u,ptr_u,*ptr_u);
    printf("\n\nv=%d    &v=%X   ptr_v=%X    *ptr_v=%d",v,&v,ptr_v,*ptr_v);
    
    printf("\ningrese un numero\n");
    scanf("%d",&a);
    printf("\na=%d\n",a);
    system("pause");
    return 0;
}