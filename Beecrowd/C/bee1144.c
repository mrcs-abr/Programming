#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int n1 = i, n2 = i * i, n3 = i * i * i;

    printf("%d %d %d\n", n1, n2, n3);
    printf("%d %d %d\n", n1, n2 + 1, n3 + 1);
  }

  return 0;
}
