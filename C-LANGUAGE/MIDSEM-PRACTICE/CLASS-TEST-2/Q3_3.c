#include <stdio.h>

int mult(int num, int n);

void main() {
  // for (int i = 10; i > 0;i--) {
  // //  printf("%d, ",mult(3, 10));
  // }
  // mult(3, 10);
  printf("%d, ",mult(3, 10));
}

int mult(int num, int n) {
  if (n == 1) {
    return num;
  } else {
    
    return num*n-1;
    // printf("%d, ",mult(num, n-1));
  }
}