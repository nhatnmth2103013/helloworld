#include <stdio.h>
#include <string.h>

void main()
{
	char nums[20];
	printf("\n\t\tEnter number: ");
		scanf("%s", nums);
	printf("\n\tTotal digits: %d\n", total(nums, 20));
}
	
	int total(char arr[], int size)
	{
		int i, total = 0;
		for(i = 0; i < strlen(arr); ++i) total += (int)(*(arr + i)) - 48;
		return total;
	}
