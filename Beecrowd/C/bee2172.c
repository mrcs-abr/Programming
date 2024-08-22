#include <stdio.h>

int main() {

  unsigned short int x;
  unsigned int m;

  while (1) {
    scanf("%hu %u", &x, &m);

    if (x == 0 && m == 0)
      break;

    printf("%u\n", x * m);
  }

  return 0;
}
