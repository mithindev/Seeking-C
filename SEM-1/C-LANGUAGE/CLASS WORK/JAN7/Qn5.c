#include <stdio.h>

void main() {
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  int sum = 0;
  int arr[n+1];
  for (int i = 0; i < n; i++) {
    printf("Enter %d th value :", i+1);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  arr[n] = sum;
  
  for (int i = 0; i <= n; i++) {
    printf("%d, ", arr[i]);
  }
}