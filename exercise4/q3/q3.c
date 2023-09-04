
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *mug1, int *mug2) 
{
	int mug3;
	mug3 = *mug1;
	*mug1 = *mug2;
	*mug2 = mug3;
}

void sort5numbers(int* arr, int size)
{
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size-1; j++) 
		{
			if (arr[j] > arr [j+1]) 
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void printIntegerArray(int* arrayPointer, int size)
{
	for (int i = 0; i < size; i++) 
	{
		printf("%d\n", arrayPointer[i]);
	}	
}

int main () 
{	
	int integerArray[] = {31, 15, 20, 39, 13};
	sort5numbers(integerArray, 5);
	printIntegerArray(integerArray, 5);
	
	return 0;
}