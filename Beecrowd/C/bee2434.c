#include <stdio.h>

int main() {
  int n, s, value, lowest;

  scanf("%d %d", &n, &s);

  lowest = s;

  for (int i = 0; i < n; i++) {
    scanf("%d", &value);
    s += value;

    if (s < lowest)
      lowest = s;
  }

  printf("%d\n", lowest);

  return 0;
}
