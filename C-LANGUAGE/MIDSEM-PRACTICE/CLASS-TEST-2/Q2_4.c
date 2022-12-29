#include <stdio.h>

int fibo(int n);

void main() {
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  int sum = 0;
  for (int i = 1; i <= n;i++) {
      printf("%d, ", fibo(i));
      sum += fibo(i);
    
  }
  printf("\n");
  printf("%d",sum);

}

int fibo(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 2;
  } else {
    return fibo(n-1) * fibo(n-2);
  }
}