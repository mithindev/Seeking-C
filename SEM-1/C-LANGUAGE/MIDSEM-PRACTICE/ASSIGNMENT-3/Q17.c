#include <stdio.h>

int fact (int n);
int num(int n);

void main() {
  int n = 5;
  for (int i = 0; i <= n; i++) {
    printf("%d, ",num (i));
  }
}

int num(int n) {
  return fact(2*n)/(fact(n+1)*fact(n));
}

int fact (int n) {
  if (n < 2) {
    return 1;
  } else {
    return n*fact(n-1);
  }
}