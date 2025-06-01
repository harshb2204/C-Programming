
#define KEY 'X';
#define CLEARTEXT 'A';


#include <stdio.h>


void printchar(char c, char *text){
    printf("%s = '%c' (%x)\n", text, c, c); 
    return;

}

int main(){



    char cleartext, key, ciphertext, newcleartext;
    cleartext = CLEARTEXT;
    printchar(cleartext, "cleartext");

    key = KEY;
    printchar(key, "key");

    ciphertext = key ^ cleartext;
    printchar(ciphertext, "ciphertext");
    newcleartext = ciphertext ^ key;
    printchar(newcleartext, "newcleartext");



}