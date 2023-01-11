#include <stdio.h>

void main() {
  int m,n,p,q;
  printf("Enter m :");
  scanf("%d",&m);
  printf("Enter n :");
  scanf("%d",&n);
  printf("Enter p :");
  scanf("%d",&p);
  printf("Enter q :1");
  scanf("%d",&q);

  int arr1[m][n];
  int arr2[p][q];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d",&arr1[i][j]);
    }
  }

  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      scanf("%d",&arr2[i][j]);
    }
  }

  int arrf[m][q];


  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      arrf[i][j] = 0;
      for (int k = 0;k < n; k++) {        
        arrf[i][j] +=  + arr1[i][k]*arr2[k][j];
      }      
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      printf("%d ", arrf[i][j]);
    }
    printf("\n");
  }


}