#include <stdio.h>

int search (int arr[], int len, int target);

void main() {
  int n,m;
  printf("Enter value n :");
  scanf("%d",&n);
  printf("Enter value m :");
  scanf("%d",&m);
  int arr1[n];
  int arr2[m];

  for (int i = 0;i < n;i++) {
    printf("Value :");
    scanf("%d",&arr1[i]);
  }
  for (int i = 0;i < m;i++) {
    printf("Value :");
    scanf("%d",&arr2[i]);
  }


  for (int i = 0;i < n;i++) {
    
    printf("%d, ",arr1[i]);
  }

  for (int i = 0;i < m;i++) {
    
    printf("%d, ",arr2[i]);
  }

  int common = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <m; j++) {
      if (arr1[i] == arr2[j]) {
        common++;
      }
    }
  }

  int len = m + n - common;

  int array_out[len];
  int k = 0;
  for (int i = 0; i < n; i++) {
    array_out[k] =arr1[i];
    k++; 
  }

  for (int j = 0; j < m; j++) {
    if (search(array_out,m, arr2[j]) == 0) {
      array_out[k++] = arr2[j];
    }

  } 


  for (int i = 0;i < len;i++) {
    printf("%d, ",array_out[i]);
  } 

  printf("\n");

  printf("Then number of elements in arr1 U arrr2 = %d",len);

}

int search (int arr[], int len, int target) {
  for (int i = 0;i < len;i++) {
    if (arr[i] == target) {
      return 1;
    }
  }
  return 0;

  
}