#include <stdio.h>

int main() {
    int rows, cols, i, j, matrix[100][100], transpose[100][100];

    // Get the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];  // Swap row and column index
        }
    }

    // Display the transposed matrix
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {  // Note: rows become columns
        for(j = 0; j < rows; j++) {  // Note: columns become rows
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

