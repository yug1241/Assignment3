//(A3.Q6):-Write a program to accept a number and print all factors excluding the number


#include<stdio.h>

int main(void) 
{
	int num, i = 1;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Factors of %d (excluding %d): ",num,num);
	while (i < num)
	{
		if (num % i == 0)
		{
			printf("%d, ", i);
		}
		i++;
	}

	printf("\n");

	return 0;
}
