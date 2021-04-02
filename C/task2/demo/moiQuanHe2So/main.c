#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int num1; /* first number to be read from user */
	int num2; /* second number to be read from user */

	printf ("Enter two integers, and I will tell you\n");
	printf (" the relationship they sastify: ");
	
	scanf ("%d%d", &num1, &num2); /*read two integers */

	if (num1 == num2) {printf("%d is equal to %d\n", num1, num2);} /* end if */
	if (num1 != num2) {printf("%d is not equal to %d\n", num1, num2);} /* end if */
	if (num1 < num2) {printf("%d is less to %d\n", num1, num2);} /* end if */
	if (num1 > num2) {printf("%d is greater than %d\n", num1, num2);} /* end if */
	if (num1 <= num2) {printf("%d is less than or equal to %d\n", num1, num2);} /* end if */
	if (num1 >= num2) {printf("%d is greater than or equal to %d\n", num1, num2);} /* end if*/
	
	return 0; /* indicate that program ended successfully */
} /* end function main */

