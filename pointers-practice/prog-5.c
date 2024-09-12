// Write a C program to copy one array to another using pointers.
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr1[n], arr2[n];
  int *p1, *p2;
  p1 = arr1;
  p2 = arr2;
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", p1+i);
  }
  for(int i = 0; i < n; i++){
    *(p2+i) = *(p1+i);
  }
  printf("Array 1: ");
  for(int i = 0; i < n; i++){
    printf("%d ", *(p1+i));
  }
  printf("\nArray 2: ");
  for(int i = 0; i < n; i++){
    printf("%d ", *(p2+i));
  }
  return 0;
}