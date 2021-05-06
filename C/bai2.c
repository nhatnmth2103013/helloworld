#include <stdio.h>
#include <string.h>

void lowerCase(char s[], int size)
{
	int i;
	printf("Enter string: ");
	scanf("%[^\n]", s);
	for(i = 0; i < strlen(s); ++i)
	{
		if(s[i] == 32) continue;
		else if(s[i] < 97) s[i] = *(s + i) + 32;
			}	
	printf("\nUpercase: %s", s);
}

int main()
{
	char s[30];
	lowerCase(s, 30);
	return 0;
}
