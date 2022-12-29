#include <stdio.h>

int mult(int num, int n);

void main() {
  for (int i = 10; i > 0;i--) {
   printf("%d\n",mult(3, i));
  }
}

int mult(int num, int n) {
  if (n == 1) {
    return num;
  } else {
    return num+mult(num, n-1);
  }
}