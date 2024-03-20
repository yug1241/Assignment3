//(A3.Q2) : Write a program to print table of given number.

#include <stdio.h>

int main()
{
	int num,i = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Table of %d:\n",num);
	while (i <= 10)
	{
		printf("%d x %d = %d\n", num, i, num * i);
		i++;
	}

	return 0;
}
