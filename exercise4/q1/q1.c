
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringCopy(char *s)
{
	char* copy = malloc(sizeof(*s)-1);
	int size = strlen(s);
	for (int i = 0; i < size; i++)
	{
		copy[i] = s[i];
	}
	return copy;
}

int main () 
{
	char stringArray[] = {'H', 'e', 'l', 'l', 'o', 'w', 'o'};
	char* copy = stringCopy(stringArray);
	printf("%s\n", copy);
	
	return 0;
}