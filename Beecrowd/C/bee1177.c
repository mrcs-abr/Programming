#include <stdio.h>

int main() {
  int t, n[1000], count = 0;

  scanf("%d", &t);

  for (int i = 0; i < 1000; i++) {
    n[i] = count;
    count++;

    if (count == t)
      count = 0;
  }

  for (int i = 0; i < 1000; i++) {
    printf("N[%d] = %d\n", i, n[i]);
  }

  return 0;
}
