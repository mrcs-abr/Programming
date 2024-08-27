#include <stdio.h>

int main() {
  int n, t, v, total = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &t, &v);
    total += t * v;
  }

  printf("%d\n", total);

  return 0;
}
