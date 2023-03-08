#include <stdio.h>

void main() {
  int age = 22;
  int *ptr = &age;
  
  // address of var age

  printf("Address of age : %p \n", &age);
  printf("Address of age : %u \n", &age);
  printf("Address of age : %u \n", ptr);

  // address of pointer:

  printf("Address of age : %u \n", &ptr);

}