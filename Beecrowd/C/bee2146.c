#include <stdio.h>

int main() {
  int n, input;

  while (1) {
    input = scanf("%d", &n);

    if (input == EOF)
      break;
    else
      printf("%d\n", n - 1);
  }

  return 0;
}
