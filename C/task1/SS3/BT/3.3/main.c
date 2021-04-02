#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tuoi, luong;
	
	printf("So Tuoi Cua Ban: ");
	scanf("%d", &tuoi);
	
	luong = tuoi *  100;
	
	if (luong <700)
		printf("Co Gang Len ");
		else
			printf("Chuc Mung ");
			
	printf ("Luong Cua Ban: %d\n", luong);
	
	if (luong >700)
		if(luong<900)
				printf("Sap Duoc Tang Luong\n");
			else
				printf ("Co Gang Len\n");

	return 0;
}
