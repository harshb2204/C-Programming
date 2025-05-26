#include<stdio.h>


int area_triangle(int b, int h){

	int a = b*h;
	return a;

}



int main(){

	int b,h,a;

	printf("Base: ");//here we will not end will newline, printf buffers everything until it receives a newline char and then it prints everything at once, so if we do not print with newline it might not show up 

	//to flush the buffer and printout
	fflush(stdout);
	scanf("%d", &b);

	printf("Height: ");
	fflush(stdout);
	scanf("%d", &h);

	a = area_triangle(b, h);
	printf("Area: %d\n", a);
	return 0;
}
	
