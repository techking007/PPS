// Write a C Propgram to read and  store the roll no and marks of 20 students using an array

#include <stdio.h>
int main()
{

	// declaring an array and variable for loop

	int data[5][2], i;
	char a;

	// reading values from user
	printf("Enter Roll Number and Marks:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d%d", &data[i][0], &data[i][1]);
	}

	// displaying values
	printf("Do you wanna display enterd values? y/n \n");
	scanf(" %c", &a);
	if (a == 'y')
	{
		printf("Roll Number : Marks\n");
		for (i = 0; i < 5; i++)
		{
			printf("%d\t%d\n", data[i][0], data[i][1]);
		}
	}
	return 0;
}
