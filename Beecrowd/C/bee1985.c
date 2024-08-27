#include <stdio.h>

int main() {
  int code, p, q;
  float total = 0;

  scanf("%d", &p);

  for (int i = 0; i < p; i++) {
    scanf("%d %d", &code, &q);

    switch (code) {
    case 1001:
      total = total + (q * 1.50);
      break;
    case 1002:
      total = total + (q * 2.50);
      break;
    case 1003:
      total = total + (q * 3.50);
      break;
    case 1004:
      total = total + (q * 4.50);
      break;
    case 1005:
      total = total + (q * 5.50);
      break;
    }
  }

  printf("%.2f\n", total);

  return 0;
}
