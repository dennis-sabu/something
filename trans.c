#include <stdio.h>

void main() {
    int rows, cols, i, j;

    // Step 1: Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];  // Original matrix and transposed matrix

    // Step 2: Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Compute the transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];  // Swap rows and columns
        }
    }

    // Step 4: Display the transposed matrix
    printf("\nThe transpose of the matrix is:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}