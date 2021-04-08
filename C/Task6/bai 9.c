#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
float num1, num2, num3;

printf("Nhap vao 3 so:");
scanf("%f%f%f", &num1,&num2,&num3);

if(num1>=num2&&num2>=num3)
printf("%f,%f,%f\n", num3, num2, num1);
if(num1>=num3&&num3>=num2)
printf("%f,%f,%f\n", num1, num3, num1);
if(num2>=num1&&num1>=num3)
printf("%f,%f,%f\n", num3, num1, num2);
if(num2>=num3&&num3>=num1)
printf("%f,%f,%f\n", num1, num3, num2);
if(num1<=num2&&num2<=num3)
printf("%f,%f,%f\n", num1, num2, num3);
if(num3>=num1&&num2<=num1)
printf("%f,%f,%f\n", num2, num1, num3);
}
