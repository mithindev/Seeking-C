#include <stdio.h>

void main () {
  int m, n;
  int matrix1[m][n], matrix2[n][m], ans[m][m];
  printf("Enter value :");
  scanf("%d", &m);
  printf("Enter value :");
  scanf("%d", &n);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; i++) {
      printf("Value :");
      scanf("%d", &matrix1[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; i++) {
      printf("Value :");
      scanf("%d", &matrix2[i][j]);
    }
  }

  

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      int temp1 = matrix1[i][j];
      int temp2 = matrix2[j][i];

      ans[i][j] = temp1*temp2;
            
    }
  }


  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d, ", ans[i][j]);
    }
    printf("\n");
  }

  
}