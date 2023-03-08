#include <stdio.h>
#include <math.h>

void main() {
  

}

int num(int n) {
  if (n == 0) {
    return 1;
  } else {
    return pow(10, n)+num(n-1);
  }
}