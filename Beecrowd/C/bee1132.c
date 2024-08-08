#include <stdio.h>

int main() {
  int aux, x, y, total = 0;

  scanf("%d\n%d", &x, &y);

  if (y < x) {
    aux = y;
    y = x;
    x = aux;
  }

  for (int i = x; i <= y; i++) {
    if (i % 13 != 0)
      total += i;
  }

  printf("%d\n", total);

  return 0;
}
