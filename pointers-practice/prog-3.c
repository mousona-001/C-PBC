//Write a C program to swap two numbers using pointers.
#include<stdio.h>
int main(){
  int a,b,*p1, *p2, temp;
  printf("ENter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Before swapping a = %d, b = %d\n", a, b);
  p1 = &a;
  p2 = &b;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
}