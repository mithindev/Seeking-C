#include <stdio.h>

void main() {
  int arr[5];
  int *ptr = arr;

  for (int i = 0;i < 5;i++) {
    printf("%d index :", i);
    scanf("%d", ptr+i);
  }

  for (int i = 0;i < 5;i++) {
    printf("arr[%d] : %d and &arr[%d] = %u\n", i, *(ptr+i), i, ptr+i);
  }

  for (int i = 0;i < 5;i++) {
    printf("arr[%d] : %d\n", i, *(ptr+i));
  }

  for (int i = 0;i < 5;i++) {
    printf("%d index : %d \n", i, *(ptr+i));
  }

}