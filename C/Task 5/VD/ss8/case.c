#include <stdio.h>
#include <conio.h>
void main()
{ int num1, num2, res;
 char op;
 num1 = 90;
 num2 = 33;
 op = '-';
 system("cls");
 switch (op)
 { case '+':
	res = num1 + num2;
	 printf("\n The Sum is: %d", res);
		break;
	case '/':
		res = num1 / num2;
		printf ("\n Number after Division: %d", res);
		break;
	case '*':
		res = num1 * num2;
		printf("\n Num ber after multiplicatiob: %d", res);
		break;
	default:
	 printf("\nInvalid");
	 break;
 }
}
