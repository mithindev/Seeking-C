#include <stdio.h> 

double power(int x, int y);
int number (int n);
int isPrime (int num);

void main() {
  int n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  int num = number(n);
  printf("%d",num);
  printf("\n");
  int sum = 0;
  for (int i = 1;i <=n;i++) {
    int term = number(i);
    printf("%d, ",term);
    sum += term;
  }
  printf("\n");
  printf("The Sum is : %d",sum);
  float avg = sum;
  avg = avg/n;
  printf("\n");
  printf("%f",avg);
  printf("\n");
  if (isPrime(num) == 1) {
    printf("Prime");
  } else {
    printf("Not prime");
  }
  printf("\n");

  if (num % 2 == 0) {
    printf("Even");
  } else {
    printf("Odd");
  }
}

int number (int n) {
  if (n < 3) {
    return 2;
  }

  return number(n-1) + power((n-2),3);
  
}

double power(int x, int y) {
  if (y == 0) {
    return 1;
  } 
  return x*power(x, y-1);
}

int isPrime (int num) {
  if (num < 2) {
    return 0;
  }
  for (int i = 2;i*i < num;i++) {
    if (num%i == 0) {
      return 0;
    }
  }
  return 1;
}