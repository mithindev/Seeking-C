#include <stdio.h>

void main() {
  printf("ENter n :");
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0;i<n;i++) {
    printf("Entetr number :");
    scanf("%d", &arr[i]);
  }
  int sum = 0;
  for (int i = 0;i<n;i++) {
    sum += arr[i];
  }

  int ans = sum/n;
  printf("Avg = %d", ans);
}