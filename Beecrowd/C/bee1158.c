#include <stdio.h>

int main() {
  int n, x, y, aux;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int total = 0;
    scanf("%d %d", &x, &y);

    while (y != 0) {
      if (x % 2 != 0) {
        total += x;
        y--;
      }
      x++;
    }
    printf("%d\n", total);
  }

  return 0;
}
