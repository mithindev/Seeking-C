#include <stdio.h>

void main() {
  int n;
  int ans[3];
  printf("Enter n :") ;
  scanf("%d",&n);
  int arr[n][n];

  for (int i = 0;i < n; i++) {
    for (int j = 0;j < n;j++) {
      if (i == j) {
        printf("Enter diagonal value :");
        scanf("%d",&arr[i][j]);
        if (arr[i][j] > 5) {
          ans[i] = arr[i][j];
        } else {
          ans[i] = 0;
        }
      } else {
        arr[i][j] = 0;
      }
    }
  }

  for (int i = 0;i < n; i++) {
    for (int j = 0;j < n;j++) {
      printf ("%d ",arr[i][j]);
      if (arr[i][j] > 5) {
      }
    }
    printf("\n");
  }

  printf("\n");

  for (int i = 0;i < n;i++) {
    printf("%d ",ans[i]);
  }
}