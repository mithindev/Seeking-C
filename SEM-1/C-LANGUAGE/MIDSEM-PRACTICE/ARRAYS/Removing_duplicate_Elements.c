#include <stdio.h>
// removing duplicate elements from an array

void rmDuplicate(int arr[], int size);

void main() {
  int arr[9] = {1, 2, 2, 3, 4, 4, 5, 5, 6};
  int size = sizeof(arr)/sizeof(arr[0]);
  rmDuplicate(arr, 9);

  for (int i = 0;i<size;i++) {
    printf("%d, ",arr[i]);
  }

}

void rmDuplicate(int arr[], int size) {
  for (int i = 0;i < size;i++) {
    for (int j = i+1;j < size; j++) {
      if (arr[i] == arr[j]) {
        for (int k = j;k < size;k++) {
          arr[k-1] = arr[k];
        }
        size = size-1;
      }
    }
  }
}