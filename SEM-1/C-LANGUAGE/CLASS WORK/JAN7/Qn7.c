#include <stdio.h>

void main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {1, 2, 3};
  
  int arr[3];
  sum (arr1, arr2, arr, 3);

  for (int i = 0; i < 3; i++) {
    printf("%d, ",arr[i]);
  }

}

void sum (int *arr1, int *arr2, int *arr, int n) {
  for (int i = 0;i < n; i++) {
    arr[i] = arr1[i] + arr2[i];
  }

}
