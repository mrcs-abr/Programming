#include <stdio.h>

int main() {
  int c, n;

  scanf("%d", &c);

  for (int i = 0; i < c; i++) {
    scanf("%d", &n);

    if (n % 2 == 0)
      printf("%d\n", 0);
    else
      printf("%d\n", 1);
  }

  return 0;
}
