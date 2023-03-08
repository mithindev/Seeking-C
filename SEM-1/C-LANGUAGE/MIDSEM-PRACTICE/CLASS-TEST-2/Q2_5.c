#include <stdio.h>
#include <math.h>

int seq(int n);

void main() {
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  int avg = 0;
  for (int i = 1; i <= n;i++) {
      printf("%d, ", seq(i));
      avg += seq(i);
  }
  printf("\n");

  printf("%d", avg);

}
int seq(int n) {
  if (n <= 2) {
    return 3;
  } else {
    return seq(n-1) + pow(n-2,2);
  }
}