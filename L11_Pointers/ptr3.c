#include <stdio.h>

int main(){

    int a = 1025;

        int *p = &a;
        printf("size of int: %d\n", sizeof(int));
        printf("Address = %d, value = %d\n", p, *p);
    
}