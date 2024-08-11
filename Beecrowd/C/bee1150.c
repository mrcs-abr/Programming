#include <stdio.h>

int main() {
  int x, z, count = 0, total = 0;

  scanf("%d", &x);

  do {
    scanf("%d", &z);
  } while (z <= x);

  for (int i = x; i < z; i++) {
    total += i;
    count++;

    if (total > z) {
      break;
    }
  }

  printf("%d\n", count);

  return 0;
}
