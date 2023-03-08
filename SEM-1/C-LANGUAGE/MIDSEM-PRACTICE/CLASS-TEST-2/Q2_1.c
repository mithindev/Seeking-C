#include <stdio.h>

int fibo(int n);

void main() {
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  int product = 1;
  for (int i = 0; i < n;i++) {
    if (fibo(i)%2 == 1) {
      printf("%d, ", fibo(i));
      product *= fibo(i);
    }
  }
  printf("\n");
  printf("%d",product);

}

int fibo(int n) {
  if (n < 2) {
    return 1;
  } else {
    return fibo(n-1) + fibo(n-2);
  }
}