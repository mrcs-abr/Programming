#include <stdio.h>

int main() {
  int n, value;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &value);

    if (value == 0)
      printf("NULL\n");
    else if (value % 2 == 0 && value > 0)
      printf("EVEN POSITIVE\n");
    else if (value % 2 == 0 && value < 0)
      printf("EVEN NEGATIVE\n");
    else if (value % 2 != 0 && value > 0)
      printf("ODD POSITIVE\n");
    else
      printf("ODD NEGATIVE\n");
  }

  return 0;
}
