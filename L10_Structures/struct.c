#include <stdio.h>
#include <string.h>




	struct person{

		char title[8]; # memory is allocated in the multiple of 8 so it is better this way
		char lastname[32];
		int age;
	};
int main(){
	struct person harsh;
	strncpy(harsh.title, "enginer",  7);
	strncpy(harsh.lastname, "badagandi", 8);
	harsh.age=21;
	printf("%s %s of the age %d", harsh.title, harsh.lastname, harsh.age);
	return 0;
}


