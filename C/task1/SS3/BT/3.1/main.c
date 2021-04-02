#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	float a;
	float b;
	
	printf("a = ");
	scanf("%f", &a ); 
	
	b = a*a;
	
	printf( "binh phuong cua a la %f\n", b); 
	
	return 0; 
}
