#include <stdio.h>
#include <stdbool.h>

void print1to19(int n) {
	switch (n)
	{
		case 1:  printf("One "); break;
		case 2:  printf("Two "); break;
		case 3:  printf("Three "); break;
		case 4:  printf("Four "); break;
		case 5:  printf("Five "); break;
		case 6:  printf("Six "); break;
		case 7:  printf("Seven "); break;
		case 8:  printf("Eight "); break;
		case 9:  printf("Nine "); break;
		case 10: printf("Ten "); break;
		case 11: printf("Eleven "); break;
		case 12: printf("Twelve "); break;
		case 13: printf("Thirteen "); break;
		case 14: printf("Fourteen "); break;
		case 15: printf("Fifteen "); break;
		case 16: printf("Sixteen "); break;
		case 17: printf("Seventeen "); break;
		case 18: printf("Eighteen "); break;
		case 19: printf("Nineteen "); break;
	}
}

void print20to90(int n) {
	switch (n)
	{
		case 20:  printf("Twenty "); break;
		case 30:  printf("Thirty "); break;
		case 40:  printf("Fourty "); break;
		case 50:  printf("Fifty "); break;
		case 60:  printf("Sixty "); break;
		case 70:  printf("Seventy "); break;
		case 80:  printf("Eighty "); break;
		case 90:  printf("Ninety "); break;
	}
}
void print100() {
	printf("Hundred ");
}

int convertTensToUnits(int n) {
	int someVariable;
	someVariable = ((n / 10) * 10);
	return someVariable;
}

int convertDigitsToUnits(int n) {
	return (n % 10);
}

int convertHundredToFirstNum(int n) {
	return (n / 100);
}

int uniteConvertedUnits(int num, int firstDigit) {
	num = num % (firstDigit * 100);
	int tens = convertTensToUnits(num);
    int digits = convertDigitsToUnits(num);

    print20to90(tens);
    print1to19(digits);
    return 0;
}

int uniteHundreds(int num) {
	int firstDigit = convertHundredToFirstNum(num);
    print1to19(firstDigit);
    print100();
	return firstDigit;
}

void verbalise1To99(int n) {
	if (n < 20) {
		print1to19(n);
	}
	else if ((n > 19) && (n % 10 == 0)) {
		print20to90(n);
	}
	else {
		uniteConvertedUnits(n, 1);
	}
}

void verbaliseHundred(int n) {
	int firstDigit = uniteHundreds(n);
	uniteConvertedUnits(n, firstDigit);
}

int main() {
	int num = 7455;

	if (num > 999) {
		return -1;
	}
	else if (num > 0 && num < 100) {
		verbalise1To99(num);
	}
	else {
		verbaliseHundred(num); 
	}
	return 0;
}