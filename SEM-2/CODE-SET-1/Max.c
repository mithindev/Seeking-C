#include <stdio.h>

void main() {
  int arr[] = {5, 4, 3, 2, 1};
  int max = arr[0];
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("%d", max);
}
