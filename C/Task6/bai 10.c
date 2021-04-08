#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float m, mm, cm, dm, km;
	char ch;

	printf("Nhap vao do dai tinh theo met:\n");
	scanf("%f", &m);
	printf("Chon don vi de doi: 1.mm, 2.cm, 3.dm, 4.km\n");
	scanf("%c", &ch);
	ch = getchar();
	m = m/1000;
	cm = m/100;
	dm = m/10;
	km = m*1000;
	switch(ch)
	{
	case '1':
	printf("Do dai tinh theo mm la: %f", mm);
	break;
	case '2':
	printf("Do dai tinh theo cm la:%f", dm);
	break;
	case '3':
	printf("Do dai tinh theo dm la:%f", dm);
	break;
	case '4':
	printf("Do dai tinh theo km la:%f", km);
	break;
	}
}

