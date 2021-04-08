#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1, num2;
	char ch;	

	printf("\tNhap so thu nhat: ");
	scanf("%f", &num1);
	printf("\n\tNhap so thu hai: ");
	scanf("%f", &num2);
	printf("\n\t\tMENU\n");
	printf("\t================\n");
	putchar('\t');putchar('+');putchar('\n');
	putchar('\t');putchar('-');putchar('\n');
	putchar('\t');putchar('x');putchar('\n');
	putchar('\t');putchar(':');putchar('\n');
	printf("\t================\n");
	printf("\n\tChon:");
	scanf("%c", &ch);
	ch = getchar();

	switch(ch)
	{
	case '+':
	printf("Tong: %f + %f = %f", num1,num2, num1 + num2);
	break;
	case '-':
	printf("Hieu: %f - %f = %f", num1,num2, num1 - num2);
	break;
	case 'x':
	printf("Tich: %f x %f = %f", num1,num2, num1 * num2);
	break;
	case ':':
	printf("Thuong: %f : %f = %f", num1,num2, num1 / num2);
	break;
	}
	return 0;
}
