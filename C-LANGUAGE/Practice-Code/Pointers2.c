#include <stdio.h>

void main() {
  int age = -10;
  int *ptr = &age;

  //value at variable

  printf("age : %d \n", age);
  printf("age : %u \n", *ptr);
  printf("age : %d \n", *(&age));
}