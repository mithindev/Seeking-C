#include <stdio.h>

int fact (int n);

void main() {
  printf("%d", fact(5));
}

int fact (int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n*fact(n-1);
  }
}