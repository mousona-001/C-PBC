// .Write a C program to search an element in array using pointers.
#include<stdio.h>
int main(){
  int size, search;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size], *ptr;
  printf("Enter the elements of the array: ");
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d", &search);
  ptr = arr;
  for(int i = 0; i < size; i++){
    if(*ptr == search){
      printf("Element found at position %d\n", i);
      break;
    }
    ptr++;
  }
  return 0;
}