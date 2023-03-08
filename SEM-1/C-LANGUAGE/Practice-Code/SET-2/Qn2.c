#include <stdio.h>
#include <string.h>

void main() {
  char str[100];
  printf("Enter char :");
  fgets(str, 20, stdin);
  puts(str);
  int count = 0;
  for (int i = 0;i < 20; i++) {
    if (str[i] == '\0') {
      break;
    }
    if (str[i] == 'a' || str[i] == 'A') {
      count++;
    }
  }
  printf("%d",count);
}