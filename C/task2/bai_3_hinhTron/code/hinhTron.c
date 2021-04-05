#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, d, c, s;
	
	printf("Tinh dien tich va chu vi cua mot vong tron\n")
	printf("Nhap do dai ban kinh hinh tron = ");
	scanf ("%f", &r);
	
	d = r *2;
	c = d * 3.14;
	s = r*r * 3.14;
	
	printf("Chu vi vong tron = %f \n", c);
	printf("Dien tich vong tron = %f \n", s);
	
	return 0;
}
