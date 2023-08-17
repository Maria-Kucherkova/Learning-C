#include <stdio.h>
#include <math.h>

int perimeter(int a, int b, int c) {
    return a + b + c;
}

int semiperimeter(int a, int b, int c) {
	return (a + b + c) / 2;
}

double area(int a, int b, int c) {
	double s = semiperimeter(a, b, c);
	return sqrt(s * (s - a) * (s -b) * (s - c));
}

int ifTrue(int side1, int side2, int side3) {
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
		return 0;
	}
	else {
		return -1;
	}
}

void printingPer(int per) {
	printf("The perimeter is: %d\n", per);
}

void printingArea(double ar) {
	printf("The area is: %.2lf\n", ar);
}

int main () {
	int side1, side2, side3;

    printf("Enter the length of the sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (ifTrue(side1, side2, side3) == -1) {
        printf("Error: The input values do not represent a triangle.\n");
    } 
	else {
        int per = perimeter(side1, side2, side3);
        double ar = area(side1, side2, side3);
        printingPer(per);
        printingArea(ar);
    }

	return 0;
}