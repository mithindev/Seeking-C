#include <stdio.h>

void main() {
  int m,n,p,q;
  int arr1[m,n] = {
    {1, 2, 3}
    {2, 3, 4}
  };
  int arr2[p][q] = {
    {1, 2},
    {2, 3},
    {3, 4}
  }
  int m = 2;
  int n = 3;
  int p = 3;
  int q = 2;

  int arrf[m][q];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      for (int k = 0;k < n; k++) {
        arrf[i][j] = arr1[i][k]*arr2[k][j];
      }      
    }
  }
}