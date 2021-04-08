#include <stdio.h>

main(void)
{
	float a, b, c;

	printf("Nhap so a b c: \n");
	scanf("%f%f%f",&a, &b, &c);

	if(a>b&&a>c)
	 printf("Max = %f",a);
	
	if(b>a&&b>c)
	 printf("Max = %f",b);
	
	if(c>a&&c>b)
	 printf("Max = %f",c);
} 
