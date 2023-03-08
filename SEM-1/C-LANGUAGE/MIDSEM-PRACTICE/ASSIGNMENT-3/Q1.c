#include <stdio.h>

int isPrime(int n);
int isPerfect(int n);
int isAmstrong (int num);

void main() {
  printf("Enter n :");
  int n;
  scanf("%d", &n);
  if (isPerfect(n) + isPrime(n) + isAmstrong(n) == 3) {
    printf("True!");
  } else {
    printf("False!");
  }

}

int isPrime(int n) {
  if (n == 2) {
    return 1;
  }
  for (int i = 2; i*i < n;i++) {
    if (n%i == 0) {
      return 0;
    }
  }
  return 1;
}

int isPerfect(int n) {
  int sum = 0;
  for (int i = 1;i < n; i++) {
    if (n%i == 0) {
      sum += i;
    }
  }
  if (sum == n) {
    return 1;
  } else {
    return 0;
  }
}

int isAmstrong (int num) {
  int temp = num;
  int sum = 0;
  while (temp > 0) {
    int n = temp%10;
    sum += n*n*n;
    temp = temp/10;
  }

  if (sum == num) {
    return 1;
  } else {
    return 0;
  }

}

