#include <stdio.h>

int fibo (int num);
int isPrime (int num);
int isOdd(int num);

void main() {
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  int temp1 = 1;
  int temp2 = 0;
  while (temp1 <= n) {
    int num = fibo(temp2);
    temp2 += 1;
    if (isPrime(num)+isOdd(num) == 2) {
      printf("%d, ",num);
      temp1 += 1;
    }
  }
  


}

int isPrime (int num) {
  if (num <= 2) {
    return 1;
  }
  for (int i = 2;i*i < num;i++) {
    if (num%i == 0) {
      return 0;
    }
  }
  return 1;
}

int isOdd(int num) {
  if (num%2 == 0) {
    return 0;
  } else {
    return 1;
  }
}

int fibo (int num) {
  if (num < 2) {
    return 1;
  } else {
    return fibo(num-1)+fibo(num-2);
  }
}

