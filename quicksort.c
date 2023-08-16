#include <stdio.h>

void swap(int *x, int *y);
void quicksort(int array[], int lenght);
void quicksortRecur(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() {
	int a[] = {5,11,3,25,18,1,9,20};
	int length = 8;
	quicksort(a, length);

	for (int i = 0; i < length; i++) {
		printf("%d ", a[i]);
		printf("\n");
	}

	return 0;
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void quicksort(int array[], int length) {
	quicksortRecur(array, 0, length - 1);
}

void quicksortRecur(int array[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(array, low, high);
		quicksortRecur(array, low, pivotIndex-1);
		quicksortRecur(array, pivotIndex+1, high);
	}
}