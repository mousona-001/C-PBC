// Write a C program to add two matrix and multiply two matrix using pointers
#include<stdio.h>
#define ROWS 3
#define COLS 3

// Add two matrices
void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Multiply two matrices
void multiplyMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
      for(int j = 0; j < COLS; j++){
        result[i][j] = 0;
        for(int k = 0; k < COLS; k++){
          result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
      }
    }
}

// Input Matrix 
void inputMatrix(int matrix[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
// print matrix
void printMatrix(int matrix[ROWS][COLS]){
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLS; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
int main(){
  int matrix1[ROWS][COLS], matrix2[ROWS][COLS], resultAdd[ROWS][COLS], resultMul[ROWS][COLS];

    // Input for Matrix 1
    printf("Enter elements for Matrix 1:\n");
    inputMatrix(matrix1);

    // Input for Matrix 2
    printf("Enter elements for Matrix 2:\n");
    inputMatrix(matrix2);

    // Add matrices
    addMatrices(matrix1, matrix2, resultAdd);
    printf("Result of Matrix Addition:\n");
    printMatrix(resultAdd);

    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, resultMul);
    printf("Result of Matrix Multiplication:\n");
    printMatrix(resultMul);

    return 0;
}