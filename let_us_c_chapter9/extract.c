/* 2 Write a program that extract part of given string from the specified position 
for example if the string is "Working with strings is fun", then if from position 4 
4 characters are to be extracted then the program should return string as "king"
If the number of characters extracted to be zero then the program should extract entire string
from the specified position*/


#include <stdio.h>

int main(void)
{
	char string[100];
	int character, position, i;
	printf("enter a string:");
	scanf("%[^\n]s", string);

	printf("enter the position and characters for extraction:");
	scanf("%d%d", &position, &character);

	if(character == 0)
	{
		printf("%s\n", string);
	}
	else
	{
		for(i = position - 1; i < character + position;i++)
		{
			printf("%c", string[i]);
		}
	}
	printf("\n");

}
