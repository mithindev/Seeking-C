#include <stdio.h>

int isPrime(int n);

void main() {
  printf("Enter num :");
  int num;
  scanf("%d", &num);
  int check = 0;
  for (int i = 2; i < num; i++) {
    if (isPrime(i) + isPrime(num-i) == 2) {
      printf("True!");
      check +=1;

      break;
    }
  }
  if (check == 0) {
    printf("False!");
  }


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