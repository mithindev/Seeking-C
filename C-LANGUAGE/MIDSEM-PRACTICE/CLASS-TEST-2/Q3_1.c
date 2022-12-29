#include <stdio.h>
#include <math.h>

int num(int n);

void main() {
  printf("Enter n :");
  int n;
  scanf("%d", &n);
  int sum = 0;
  for (int i = 1;i<=n;i++) {
    printf("%d, ", num(i));
    sum += num(i);
  }
  printf("\n%d", sum);

}

int num(int n) {
  return pow(10,n)-1;
}