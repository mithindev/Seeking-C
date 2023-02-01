#include <stdio.h>

#define MAX 50

void main() {
  char str[MAX];
  fgets(str, MAX, stdin);
  printf("String is :%s\n ", str);

  puts(str);


}