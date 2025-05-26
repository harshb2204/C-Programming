#include <stdio.h>

int main(){



	char name[50];
	printf("What is your name");
	scanf("%s",name);//name is already of type char * (when passed to functions), because array names decay to pointers.

//Using &name gives the address of the array itself, which is a pointer to the whole array — not what scanf("%s", ...) expects.
	printf("Hello %s\n",name);
	return 0;

}
