#include <stdio.h>

int main() {
  int teaType, a, b, c, d, e, count = 0;

  scanf("%d", &teaType);
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  int guesses[] = {a, b, c, d, e};

  for (int i = 0; i < 5; i++) {
    if (guesses[i] == teaType) {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}
