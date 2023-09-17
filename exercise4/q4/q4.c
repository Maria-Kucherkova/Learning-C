#include <stdio.h>
#include <stdlib.h>

int** createRagged2DArray(int numRows) {
    int** raggedArray = (int**)malloc(numRows * sizeof(int*));
    if (raggedArray == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    // Initialize rows with varying lengths
    for (int i = 0; i < numRows; i++) {
        int rowLength;
        printf("Enter the number of elements for row %d: ", i + 1);
        scanf("%d", &rowLength);

        raggedArray[i] = (int*)malloc(rowLength * sizeof(int));
        if (raggedArray[i] == NULL) {
            fprintf(stderr, "Memory allocation failed for row %d.\n", i);
            exit(1);
        }

        // Initialize the row's elements
        printf("Enter %d elements for row %d: ", rowLength, i + 1);
        for (int j = 0; j < rowLength; j++) {
            scanf("%d", &raggedArray[i][j]);
        }
		raggedArray[i][0] = rowLength;
    }

    return raggedArray;
}

int main() {
    int numRows;
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    int** raggedArray = createRagged2DArray(numRows);

    // Print the ragged array
    printf("Ragged 2D Array:\n");
    for (int i = 0; i < numRows; i++) {
        int rowLength = raggedArray[i][0];
        printf("Row %d: ", i + 1);

        for (int j = 0; j < rowLength; j++) {
            printf("%d ", raggedArray[i][j]);
        }
        printf("\n");

        // Free memory for each row
        free(raggedArray[i]);
    }

    // Free memory for the array of pointers
    free(raggedArray);

    return 0;
}
