#include <stdio.h>
#include <stdbool.h>

bool isPM;

int changeFormat(int n) {
	if (n == 0)
	{
		isPM = false;
		return 12;
	}
	else if (n > 12) {
		isPM = true;
		return n - 12;
	}
	isPM = false;
	return n;
}

int main () {
	int hours = 15;
	int minutes = 30;
	char suffix1[2];
	hours = changeFormat(hours);
	if (isPM)
		suffix1[0] = 'p';
	else
		suffix1[0] = 'a';
	suffix1[1] = 'm';
	printf("Time is %d:%d %s\n", hours, minutes, suffix1);

	return 0;
}