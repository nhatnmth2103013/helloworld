#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, d, c, s;
	
	printf("Nhap ban kinh hinh tron = ");
	scanf ("%f", &r);
	
	d = r *2;
	c = d * 3.14;
	s = r*r * 3.14;
	
	printf ("Duong kinh hinh tron = %f \n", d);
	printf("Chu vi hinh tron = %f \n", c);
	printf("Dien tich hinh tron = %f \n", s);
	
	return 0;
}
