#include <stdio.h>

int main() {
  int n, q;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &q);
    printf("resposta %d: %d\n", i + 1, q);
  }

  return 0;
}
