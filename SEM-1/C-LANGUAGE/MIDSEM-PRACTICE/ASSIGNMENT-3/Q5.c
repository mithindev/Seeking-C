#include <Stdio.h>

int isPrime(int n);
int tribo(int n);

void main() {
  printf("Enter n :");
  int n;
  scanf("%d", &n);
  int num = tribo(n);
  if (num == 2) {
    printf("Even prime!");
  }
  if (isPrime(num) == 1) {
    printf("Odd prime!");
  } else {
    printf("Not prime!");
  }

}

int tribo(int n) {
  if (n < 2) {
    return 2;
  }
  if (n >= 2 && n <= 3) {
    return 1;
  }
  return tribo (n-1)+tribo(n-2)+tribo(n-3);
}

int isPrime(int n) {
  if (n == 2) {
    return 1;
  }
  for (int i = 2; i < n;i++) {
    if (n%i == 0) {
      return 0;
    }
  }
  return 1;
}
