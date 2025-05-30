#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a; // same as int *ptr = a; p = &a;

    printf(" Initial value of a: %d\n", a);
    printf(" Address of a: %p\n", &a);
    *ptr = 20;
    printf(" Updated value of a: %d\n", a);

    printf(" Address ptr points to: %p\n", ptr);
    printf(" Address  ptr +1 points to: %p\n", ptr+1); //int is 4 bytes, so ptr+1 points to the next int
}