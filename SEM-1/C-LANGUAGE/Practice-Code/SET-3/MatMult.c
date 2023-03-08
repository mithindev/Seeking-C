#include <stdio.h>

void main () {
  int m, n, o;

  printf("Enter value :");
  scanf("%d", &m);
  printf("Enter value :");
  scanf("%d", &n);
  printf("Enter value :");
  scanf("%d", &o);

  int matrix1[m][n], matrix2[n][o];
  printf("MAtrix 1");

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; i++) {
      printf("Value :");
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("MAtrix 2");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < o; i++) {
      printf("Value :");
      scanf("%d", &matrix2[i][j]);
    }
  }

  int ans[m][o];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int temp1 = matrix1[i][j];
      int temp2 = matrix2[j][i];

      ans[i][j] = temp1*temp2;
      printf("%d, ", ans[i][j]);
    }
    printf("\n");
  }
}
