#include <stdio.h>

int main(){

        int a = 1025;

        int *p = &a;
        printf("size of int: %d\n", sizeof(int));
        printf("Address = %d, value = %d\n", p, *p);

        //void pointer
        void *p0;
        p0 = p;
        // cannot dereference void pointer as it is not mapped to any type
        
    
}       