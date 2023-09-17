#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(int size, int* c)
{
	int row, col;	
}

int main() 
{
	char c[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum";

	int size = strlen(c);

	split(size, &c);
	printf("%s", c);


	return 0;
}