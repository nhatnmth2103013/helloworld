#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float usd, tygia;
	int vnd;
	
	printf("Chuyen tien do sang tien viet\n");
	printf("Ty gia dong do la: ");
	scanf("%f", &tygia);
	printf("Nhap vao so tien bang do la:");
	scanf("%f", &usd);
	
	vnd = usd*tygia*1000;
	
	printf("chuyen sang tien viet: %.2f USD = %d VND", usd, vnd);
	return 0;
}
