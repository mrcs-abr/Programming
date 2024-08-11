#include <stdio.h>

int main() {
  int usrInput, n[10];

  scanf("%d", &usrInput);
  n[0] = usrInput;

  for (int i = 1; i < 10; i++) {
    n[i] = n[i - 1] * 2;
  }

  for (int i = 0; i < 10; i++) {
    printf("N[%d] = %d\n", i, n[i]);
  }

  return 0;
}
