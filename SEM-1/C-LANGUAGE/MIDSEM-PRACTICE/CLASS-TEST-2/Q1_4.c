#include <stdio.h>

void main() {
  int arr[5];
  // int a, b, c;
  // printf("Enter number :");
  // scanf("%d", &a);
  // printf("Enter number :");
  // scanf("%d", &b);
  // printf("Enter number :");
  // scanf("%d", &c);
  // arr[0] = a;
  // arr[1] = b;
  // arr[2] = c;
  // int l = sizeof(arr)/sizeof(arr[0]);
  // printf("%d\n", l);
  // for (int i = 0; i < l;i++) {
  //   printf("%d\n", arr[i]);
  // }
  int l = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < l;i++) {
    printf("Enter number :");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < l;i++) {
    printf("%d, ", arr[i]);
  }

  printf("\n");

  // bubble sort:
  for (int i = 0; i < l;i++) {
    for (int j = 1; j < l;j++){
      if (arr[j] < arr[j-1]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    }
  }
  for (int i = 0; i < l;i++) {
    printf("%d, ", arr[i]);
  }

}