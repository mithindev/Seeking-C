#include <stdio.h>

void main() {
  int a, b, c, max;
  printf("Enter number :");
  scanf("%d", &a);
  printf("Enter number :");
  scanf("%d", &b);
  printf("Enter number :");
  scanf("%d", &c);

  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  printf("The max is %d", max);
}