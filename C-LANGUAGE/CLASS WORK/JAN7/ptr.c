#include <stdio.h>

void main() {
  int age = 22;
  int *ptr = &age;

  printf("Age : %u\n", ptr);
  printf("Age : %u\n", ++ptr);
  printf("Age : %u\n", ptr+4);

}