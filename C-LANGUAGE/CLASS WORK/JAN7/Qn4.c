#include <stdio.h>

void main() {
  int n;
  printf("Enter tn :");
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = i+1;
  }
  for (int i = 0; i < n; i++) {
    printf("%d, ", arr[i]);
  }
}