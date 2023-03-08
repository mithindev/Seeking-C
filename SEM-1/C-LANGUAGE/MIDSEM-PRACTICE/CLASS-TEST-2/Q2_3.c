#include <stdio.h>
#include <math.h>

void main() {
  int num1, num2;
  printf("Enter num1 :");
  scanf("%d", &num1);
  printf("Enter num2 :");
  scanf("%d", &num2);
  int l1 = pow(num1, 0.5); 
  int arr1[l1];
  int l2 = pow(num2, 0.5);
  int arr2[l2];
  printf("%d", l1);
  for (int i = 0;i<l1;i++) {
    int temp = 0;
    if (num1%i==0) {
      scanf("%d", &arr1[temp]);
      temp += 1;
    }
  }
  for (int i = 0;i<l2;i++) {
    int temp = 0;
    if (num1%i==0) {
      scanf("%d", &arr2[temp]);
      temp += 1;
    }
  }
  int ln1 = sizeof(arr1)/sizeof(arr1[0]);
  int ln2 = sizeof(arr2)/sizeof(arr2[0]);

  for (int i = 0;i < l1;i++) {
    printf("%d, ", arr1[i]);
  }

  printf("\n");

  for (int i = 0;i < l2;i++) {
    printf("%d, ", arr2[i]);
  }
  
  
}