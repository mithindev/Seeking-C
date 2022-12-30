#include <stdio.h>

void main() {

}

int length(int num) {
  int count = 0;
  while (num > 0) {
    count++;
    num /= 10;
  }
  return count;
}
