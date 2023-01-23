#include <stdio.h>

void main() {
  int age = 22;
  int *ptr = &age;
  int val = *ptr;

  printf("%d", val);
  printf("%d", ptr);

}

