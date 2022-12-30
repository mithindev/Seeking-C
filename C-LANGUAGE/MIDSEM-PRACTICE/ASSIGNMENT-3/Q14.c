#include <stdio.h>
#include <math.h>

void pt(int n);
int fact (int n);
void spaces(int n);

void main() {
  printf("Enter num :");
  int num;
  scanf("%d", &num);
  spaces(num);
  printf("%d\n",1);
  for (int i = 1;i < num; i++) {
      spaces(num-i);
      pt(i);
      printf("\n");

  }
}

void pt(int n) {

  for (int i = 0;i <= n;i++) {
    int term = fact(n)/(fact(i)*fact(n-i));
    printf("%d ",term);    
  }

  // for (int j = 1;j < n;j++) {
  //   for (int k = 1;k<=j;k++) {
      // int term = fact(j)/(fact(k)*fact(j-k));
      // printf(" %d ",term);
  //   }
  // }
  // printf("\n");
}
  
// }

int fact (int n) {
  if (n < 2) {
    return 1;
  } else {
    return n*fact(n-1);
  }
}
void spaces(int n) {
  for (int i = 0;i<n-1;i++) {
    printf(" ");
  }
}

