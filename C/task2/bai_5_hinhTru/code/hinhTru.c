#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float radius, hight;
	
	printf("Tinh the tich hinh tru\n");
	printf("Nhap do dai ban kinh day hinh tru: ");
	scanf ("%f", &radius);
	printf("Nhap chieu cao hinh tru: ");
	scanf("%f", &hight);

	printf("the tich hinh tru = %.2f \n", radius*radius*3.14*hight);
	
	return 0;
}
