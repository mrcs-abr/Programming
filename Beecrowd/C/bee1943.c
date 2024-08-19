#include <stdio.h>

int main() {
  int k;

  scanf("%d", &k);

  if (k == 1)
    printf("Top 1\n");
  else if (1 < k && k <= 3)
    printf("Top 3\n");
  else if (3 < k && k <= 5)
    printf("Top 5\n");
  else if (5 < k && k <= 10)
    printf("Top 10\n");
  else if (10 < k && k <= 25)
    printf("Top 25\n");
  else if (25 < k && k <= 50)
    printf("Top 50\n");
  else
    printf("Top 100\n");

  return 0;
}
