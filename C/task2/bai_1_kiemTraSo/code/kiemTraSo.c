#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long int a;

	printf("Kiem tra mot so la nguyen duong, nguyen am hay 0\n");
	printf("Nhap so can kiem tra: ");
	scanf("%d", &a);
	
	if(a<0){
		printf("%d La So Nguyen Am\n",a);
	}
	if(a>0){
		printf("%d La So Nguyen Duong\n",a);
	}
	if(a==0){
		printf("Day La So 0");
	}
	return 0;
}
