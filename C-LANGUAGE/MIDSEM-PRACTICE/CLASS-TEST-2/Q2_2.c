#include <stdio.h>

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
  float avg_f = avg/n;
  printf("%f", avg_f);

}
int seq(int n) {
  if (n < 2) {
    return 1;
  } else {
    return seq(n-1) + 3*(n-1);
  }
}