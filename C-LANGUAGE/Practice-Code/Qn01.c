#include <stdio.h>
#include <string.h>

void main() {
  char name[100];
  printf("Enter your name :");
  fgets(name, 20, stdin);
  puts(name);
  int count = 0;
  for (int i = 0;i < 20; i++) {
    if (name[i] == '\0') {
      printf("Length with space %d ", i);
      break;
    }
    if (name[i] != " ") {
      count++;
    }
  }
  printf("%d",count);

}