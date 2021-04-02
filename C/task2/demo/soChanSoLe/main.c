#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int r;
	
	printf("Nhap so a: ");
	scanf("%d", &num );
	
	r = num % 2;
	
	if(r==0)
	{
			printf("Number is even \n");
		} else {
			printf("Number is odd \n");
	}
	return 0;
}
