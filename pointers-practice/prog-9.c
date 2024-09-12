// Write a C program to access two dimensional array using pointers.
#include<stdio.h>
int main(){
  int row, col;
  printf("Enter the number of rows: ");
  scanf("%d", &row);
  printf("Enter the number of columns: ");
  scanf("%d", &col);
  int arr[row][col], *ptr;
  printf("Enter the elements of the array: ");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  ptr = arr;
  printf("The elements of the array are: ");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      printf("%d ", *(ptr + i * col + j));
    }
  }
  return 0;
}