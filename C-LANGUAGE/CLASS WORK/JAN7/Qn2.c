#include <stdio.h> 

void main() {

}

double power(int x, int y) {
  if (y == 0) {
    return 1;
  } 
  return x*power(x, y-1);
}