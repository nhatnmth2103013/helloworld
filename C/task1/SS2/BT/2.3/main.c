#include <stdio.h>

main()
{
	int a = 10;
	int b;
	
	b = a + a++;
	
	printf("%d", b);
}
