#include <stdio.h>
#include <math.h>


int length(int num);

void main() {
  printf("Enter the number :");
  int num;
  scanf("%d", &num);
  int temp = num;
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
