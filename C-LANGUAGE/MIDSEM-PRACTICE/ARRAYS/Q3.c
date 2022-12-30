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
  for (int i = 0;i<n;i++) {
    printf("%d, ",arr[i]);
  }
  for (int i = 0;i < n;i++) {
    for (int j = 1;j < n;j++) {
      if (arr[j] > arr[j-1]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    }
  }
  printf("\n");
    for (int i = 0;i<n;i++) {
    printf("%d, ",arr[i]);
  }
}