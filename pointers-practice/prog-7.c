// Write a C program to reverse an array using pointers.
#include<stdio.h>
int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size], *ptr1, *ptr2;
  printf("Enter the elements of the array: ");
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  printf("The array before reversing is: ");
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  ptr1 = arr;
  ptr2 = arr + size - 1;
  while(ptr1 < ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    ptr1++;
    ptr2--;
  }
  printf("\nThe array after reversing is: ");
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}