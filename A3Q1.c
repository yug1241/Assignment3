//(A3.Q1):Write a program to accept a character and a number, and print the character number times

#include <stdio.h>

int main()
{
	char ch;
	int num, count;
	printf("Enter a character: ");
	scanf(" %c", &ch);
	printf("Enter a number: ");
	scanf("%d", &num);
	count = 0;

	while(count < num)
	{
		printf("%c", ch);
		count++;
	}
	printf("\n");

	return 0;
}
