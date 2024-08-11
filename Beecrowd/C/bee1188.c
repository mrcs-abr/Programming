#include <stdio.h>

int main() {
  char op;
  float m[12][12], totalSum = 0, nElem = 0;

  scanf("%c", &op);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%f", &m[i][j]);
    }
  }

  int start = 1, end = 11;

  for (int i = 11; i > 6; i--) {
    for (int j = start; j < end; j++) {
      totalSum += m[i][j];
      nElem++;
    }
    start++;
    end--;
  }

  if (op == 'S')
    printf("%.1f\n", totalSum);
  else
    printf("%.1f\n", totalSum / nElem);

  return 0;
}
