// (A3.Q5):Write a program to find factorial of given number

#include <stdio.h>

int main(void)
{
	int num,factorial = 1,i = 1;
	printf("Enter the number: ");
	scanf("%d",&num);

	while (i <= num)
	{
		factorial *= i;
		i++;
	}

	printf("Factorial of %d is = %d\n", num, factorial);

	return 0;
}
