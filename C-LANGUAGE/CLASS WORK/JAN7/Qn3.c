#include <stdio.h>

int isPrime (int num);

void main() {
  int num;
  printf("Enter the number :");
  scanf("%d", &num);
  for (int i = 2; i <= num/2; i++) {
    if (isPrime(i) == 1) {
      if (isPrime(num - i) == 1) {
        printf("%d + %d = %d\n", i, num - i,num);
      }
      
    }
  }
}

int isPrime (int num) {
  if (num < 2) {
    return 0;
  }
  for (int i = 2;i*i <= num;i++) {
    if (num%i == 0) {
      return 0;
    }
  }
  return 1;
}