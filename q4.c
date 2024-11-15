#include <stdio.h>

int main() {
    int rows, cols;
    
   
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
   
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    
    int rowIndex, colIndex;
    printf("Enter the row index for sum (0 to %d): ", rows - 1);
    scanf("%d", &rowIndex);
    printf("Enter the column index for sum (0 to %d): ", cols - 1);
    scanf("%d", &colIndex);
    
    
    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
        rowSum += arr[rowIndex][j];
    }
    
    
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        colSum += arr[i][colIndex];
    }
    
    
    printf("Sum of elements in row %d: %d\n", rowIndex, rowSum);
    printf("Sum of elements in column %d: %d\n", colIndex, colSum);
    
    return 0;
}
