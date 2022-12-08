// Written by <Maria Kucherkova, 08/12/2022>
// This program displays my name.
#include <stdio.h>
#include <string.h>
int main(void)
{
	char myName[] = "Maria Kucherkova";
	char depName[] = "Dept. of Computer Science";
	char address1[] = "Malet Place Engineering Building";
	printf("Hello, my name is %s. I am studying at the %s.\nYou can find the Dean's Office at %s\n", myName, depName, address1);
	int index = strlen(myName) - 1;
	while (index > -1)
	{
    printf("%c", myName[index]);
    index = index - 1;
	}
	printf("\n");
return 0; 
}