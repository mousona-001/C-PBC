// Write a C program to swap two arrays using pointers.
#include<stdio.h>
int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr1[size], arr2[size], *ptr1, *ptr2;
  printf("Enter the elements of the first array: ");
  for(int i=0; i<size; i++){
    scanf("%d", &arr1[i]);
  }
  printf("Enter the elements of the second array: ");
  for(int i=0; i<size; i++){
    scanf("%d", &arr2[i]);
  }
  ptr1 = arr1;
  ptr2 = arr2;
  for(int i = 0; i < size; i++){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    ptr1++;
    ptr2++;
  }
  printf("The first array after swapping is: ");
  for(int i=0; i<size; i++){
    printf("%d ", arr1[i]);
  }
  printf("\nThe second array after swapping is: ");
  for(int i=0; i<size; i++){
    printf("%d ", arr2[i]);
  }
  return 0;
}
