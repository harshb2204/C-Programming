#include <stdio.h>


    int main(){



        int a = 1025;

        int *p = &a;
        printf("size of int: %d\n", sizeof(int));
        printf("Address = %d, value = %d\n", p, *p);
        char *p0 = (char*)p;// typecasting

        printf("size of char: %d\n", sizeof(char));
        printf("Address = %d, value = %d\n", p0, *p0);
        // address of p0 and p is same but value of p0 is 1 
        // if you write 1025 in binary the representation will be 
        // 00000000 00000000 00000100 00000001
        // when we do the typecasting trying to store the add of p in p0 , then the address of rightmost byte
        // is stored in p0, when we dereference p0 the machine says p0 is ptr to char and the char is 
        // only 1 byte so i look at only 1 byte to see the value and that byte is 1

        printf("Address = %d, value = %d\n", p+1, *(p+1));
        printf("Address = %d, value = %d\n", p0+1, *(p0+1));

    // size of int: 4
    // Address = 6422292, value = 1025
    // size of char: 1
    // Address = 6422292, value = 1
    // Address = 6422296, value = 6422292
    // Address = 6422293, value = 4


    }
