#include <stdio.h>
#include <string.h>

void main() {
  char str1[100];
  printf("Enter char :");
  fgets(str1, 20, stdin);
  puts(str1);
  char str2[100];
  printf("Enter char :");
  fgets(str2, 20, stdin);
  puts(str2);
  int c1,c2;
  for (int i = 0;i < 20; i++) {
    if (str1[i] == '\0') {
      c1 = i;
      break;
    }

  }
  for (int i = 0;i < 20; i++) {
    if (str2[i] == '\0') {
      c2 = i;
      break;
    }
  }

  if (c1 == c2) {
    printf("Yes!");
  } else {
    printf("No!");
  }
}