#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float hight, bottom;
	
	printf("Tinh dien tich hinh tam giac\n");
	printf("Nhap vao do dai chieu cao:");
	scanf("%f", &hight);
	printf("Nhap vao do dai canh day:");
	scanf("%f", &bottom);
	printf("Dien tich hinh tam giac: %.2f", hight*bottom/2);
	return 0;
}
