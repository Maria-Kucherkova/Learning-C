
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool strend(char *s, char *t) 
{
	int sizeS = strlen(s);
	int sizeT = strlen(t);
	
	int i;
	int j = sizeT - 1;

	for (i = sizeS - 1; i > sizeS - sizeT - 1; i--) 
	{
		if (!(s[i] == t[j])) 
		{
			return false;
		}
		j--;
	}
	return true;
}

int main () 
{
	char arrS[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd', '\0'};
	char arrT[] = {'w', 'o', 'r', 'l', 'd', '\0'};
	char arrZ[] = {'y', 'e', 'l', 'l', 'o', 'w', '\0'};
	
	if (strend(arrS, arrT) == true) 
	{
		printf("%s\noccurs at the end of \n%s\n", arrT, arrS);
	}
	else
	{
		printf("Printing nothing because strings did not qualify\n");
	}
	
	return 0;
}