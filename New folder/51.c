#include <stdio.h>

#define SIZE 2  // Define a small size for simplicity

void inputMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];
    
    printf("Enter elements of first matrix:\n");
    inputMatrix(A);
    
    printf("Enter elements of second matrix:\n");
    inputMatrix(B);
    
    addMatrix(A, B, result);
    
    printf("Result of Addition:\n");
    displayMatrix(result);
    
    return 0;
}
