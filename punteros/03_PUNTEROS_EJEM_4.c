#include <stdio.h>

int main(){

    int v = 3;
    int *ptr_v;

    ptr_v = &v;
    printf("\n*pv=%d  v=%d", *ptr_v,v);
    
    *ptr_v = 0;
    printf("\n\n*pv=%d  v=%d\n", *ptr_v,v);
    
    
    return 0;
}