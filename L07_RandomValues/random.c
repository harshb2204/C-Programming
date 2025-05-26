#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int random_function(int max){
	int x;

	x = rand() % max + 1;
	return x;


}



int main(){

	
	srand(getpid());

	
	int random;
	
	
	random = random_function(10);


	printf("%d\n", random); 
//	return 0;
}
	
