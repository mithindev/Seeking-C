#include <stdio.h>

void main() {
  char ch = 'a';
  char *ptr = &ch;

  printf("Age : %u\n", ptr);
  printf("Age : %u\n", ++ptr);
  printf("Age : %u\n", ptr+4);

}