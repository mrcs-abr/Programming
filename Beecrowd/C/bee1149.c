#include <stdio.h>

int main() {
  int a, n, total = 0;

  scanf("%d %d", &a, &n);

  while (n <= 0) {
    scanf("%d", &n);
  }

  for (int i = 0; i < n; i++) {
    total += a + i;
  }

  printf("%d\n", total);

  return 0;
}
