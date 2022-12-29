#include <stdio.h>

void main() {
  printf("Enter the num :");
  int num;
  scanf("%d",&num);
  switch (num >= 0) {
    case (1):
      switch(num == 0) {
        case 0 :
          printf(">0");
          break;
        case 1 :
          printf("=0");
          break;
      }
      break;
    case 0 :
      printf("<0");
  }

}
