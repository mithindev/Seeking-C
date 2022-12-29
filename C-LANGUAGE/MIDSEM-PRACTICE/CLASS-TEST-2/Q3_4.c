#include <stdio.h>
#include <math.h>

int num(int n, int x);
int fact (int n);

void main() {
  int x;
  printf("Enter x :");
  scanf("%d", &x);
  printf("Enter n :");
  int n;
  scanf("%d", &n);
  int sum = 1;
  for (int i = 1;i<=n;i++) {
    printf("%d, ", num(i, x));
    sum += num(i, x);
  }
  printf("\n%d", sum);

}

int num(int n, int x) {
  return (n+1)*pow(x, n)/fact(n);
}

int fact (int n) {
  if (n < 2) {
    return 1;
  } else {
    return n*fact(n-1);
  }
}