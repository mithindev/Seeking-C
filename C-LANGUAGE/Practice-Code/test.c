#include <stdio.h>
#include <string.h>

void main() {
  char name[100];
  printf("Enter your name :");
  // // gets(name);
  // // puts(name);

  fgets(name, 20, stdin);
  puts(name);
  // printf("%d", name.length());
  // printf("%d",'a'+0);
  int count = 0;
  for (int i = 0;i < 20; i++) {
    
    if (name[i] + 0 >= 48 && name[i] + 0 <= 57) {
      count++;

    }
    if (name[i] + 0 >= 65 && name[i] + 0 <= 123) {
      count++;
    }
  }
  printf("%d",count);

}