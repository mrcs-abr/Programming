#include <stdio.h>

int main() {
  int desiredPressure, currentPressure;

  scanf("%d\n%d", &desiredPressure, &currentPressure);
  printf("%d\n", desiredPressure - currentPressure);

  return 0;
}
