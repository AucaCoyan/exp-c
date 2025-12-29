#include <stdio.h>

// declaration of the function (it is defined later)
int square(int arg);

void countdown(int n) {
  // base case
  if (n < 0) {
    return;
  }
  printf("%d\n", n);

  return countdown(n - 1);
}

int main() {
  int x = 42;
  printf("x is=  %d\n", square(x));

  countdown(10);
  return 0;
}

int square(int x) { return x * x; }
