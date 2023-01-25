#include <stdio.h>

void main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {1, 2, 3};
  
  int arr[3];

  int *a = arr1;
  int *b = arr2;
  int *c = arr;
  sum(arr1, arr2, arr, 3);

  for (int i = 0; i < 3; i++) {
    printf("%d, ",arr[i]);
  }

}

void sum (int *a, int *b, int *c, int n) {
  for (int i = 0; i < n; i++) {
    c[i] = a[i] + b[i];
    *(c+i) = *(a+i) + *(b+i);
  }
}