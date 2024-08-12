#include <stdio.h>

int factorial(int a);

int main() {
  int n;

  scanf("%d", &n);
  printf("%d\n", factorial(n));

  return 0;
}

int factorial(int a) {
  if (a == 0 || a == 1)
    return 1;
  else {
    return a * factorial(a - 1);
  }
}
