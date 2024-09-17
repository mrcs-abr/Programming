#include <stdio.h>

int main() {
  int b, g, nballs, needed;

  scanf("%d\n%d", &b, &g);

  nballs = g / 2;
  needed = nballs - b;

  if (needed > 0)
    printf("Faltam %d bolinha(s)\n", needed);
  else
    printf("Amelia tem todas bolinhas!\n");

  return 0;
}
