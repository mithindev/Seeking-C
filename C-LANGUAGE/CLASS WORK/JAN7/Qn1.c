#include <stdio.h>

double power (int x, int y);

void main() {
  char c1;
  scanf("%c",&c1);
  int n1, n2;
  double r1, r2;
  scanf("%d%d", &n1,&n2);
  scanf("%lf%lf", &r1,&r2);
  
  //a)
  if (n1 == n2) {
    printf("They are =");
  }
  else if (n1 > n2) {
    printf("num1 is greater!");
  } else {
    printf("num2 is greater!");
  }
  // b 
  printf("\n");
  double ans = r1*r2;
  printf("%lf",ans);
  printf("\n");

  // c 

  double a1 = power(r1, n1);
  double a2 = power(r2, n2);

  
  printf("%lf & %lf", a1, a2);

  printf("\n");

  // d 

  for (int i = 0;i < (n1+n2);i++) {
    printf("%c", c1);
  }



}

double power(int x, int y) {
  if (y == 0) {
    return 1;
  } 
  return x*power(x, y-1);
}