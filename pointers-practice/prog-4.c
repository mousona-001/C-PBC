//.Write a C program to input and print array elements using pointer.
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  int *p;
  p = arr;
  printf("Enter 5 elements: ");
  for(int i = 0; i < 5; i++){
    scanf("%d", p+i);
  }
  printf("You entered: ");
  for(int i = 0; i < 5; i++){
    printf("%d ", *(p+i));
  }
  return 0;
}