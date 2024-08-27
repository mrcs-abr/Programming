#include <stdio.h>

int main() {
  int guests[] = {300, 1500, 600, 1000, 150};
  int quantity, total = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &quantity);
    total += quantity * guests[i];
  }

  total += 225;

  printf("%d\n", total);

  return 0;
}
