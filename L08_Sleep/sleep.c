
#include<stdio.h>
#include<unistd.h>

int main(){
	printf("Waiting for 2 seconds");

	fflush(stdout);
	sleep(2);
	printf("ok");
}

