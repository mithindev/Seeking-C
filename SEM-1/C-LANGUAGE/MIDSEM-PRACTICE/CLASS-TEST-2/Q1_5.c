#include <stdio.h>

void sort (int arr[], int l);

void main() {
  int arr[4];
  int l = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0;i < l;i++) {
    printf("Enter value :");
    scanf("%d", &arr[i]);
  }
  sort(arr, l);
  for (int i = 0;i < l;i++) {
    printf("%d, ", arr[i]);
  }

  if (arr[1] == arr[2] && arr[3] == arr[4]) {
    if (arr[2] == arr[3]) {
      prtinf("Square");
    }
  }

}

void sort (int arr[], int l) {

    for (int i = 0; i < l;i++) {
      for (int j = 1; j < l;j++){
        if (arr[j] < arr[j-1]) {
          int temp = arr[j];
          arr[j] = arr[j-1];
          arr[j-1] = temp;
      }
    }
  }
}
