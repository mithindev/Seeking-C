#include <stdio.h>

void calc (int *a, int *b, int *sum, int *product);

void main() {
  int a, b;
  printf("Enter a :");
  scanf("%d",&a);
  printf("Enter b :");
  scanf("%d",&b);

  int sum,product;
  calc(&a, &b, &sum, &product);
  printf("Sum : %d\n",sum);
  printf("Product : %d\n", product);
}

void calc (int *a, int *b, int *sum, int *product) {
  *sum = *a + *b;
  *product = (*a)*(*b);
}