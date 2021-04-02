#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float f,c;
	
	printf("Gia tri cua do C =");
	scanf("%f", &c);

	f= 9*c/5 +32;

	printf("%.1f do C = %.1f do F", c, f);
	return 0;
}
