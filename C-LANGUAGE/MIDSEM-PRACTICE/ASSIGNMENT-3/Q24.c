#include <stdio.h>
#include <math.h>


int length(int num);

void main() {
  printf("Enter the number :");
  int num;
  scanf("%d", &num);
  int temp = num;
  // int temp = num;
  // int h = 0;
  // for (int i = 0; i < length(num)/2;i++) {
  //   int n1 = num/pow(10,length(num)-i-1);
  //   int n2 = temp%10;
  //   temp = temp/10;
  //   if (n1 != n2) {
  //     printf("False!");
  //     h = h+1;
  //   }

  // }
  // if(h == 0) {
  //   printf("Palindrome");
  // }

  int num2 = 0;
  for(int i = 0;i < length(num); i++) {
    int n = temp%10;
    num2 += n*pow(10,length(num)-i-1);
    temp /=10;
  }
  printf("%d", num2);

  if (num = num2) {
    printf("Palindrome!");
  } else {
    printf("Not palindrome!");
  }

}

int length(int num) {
  int count = 0;
  while (num > 0) {
    count++;
    num /= 10;
  }
  return count;
}
