#include <stdio.h>

int main() {
  float score, sumOfScores = 0;
  int count = 0;

  while (count < 2) {
    scanf("%f", &score);

    if (score >= 0 && score <= 10) {
      sumOfScores += score;
      count += 1;
    } else
      printf("nota invalida\n");
  }

  printf("media = %.2f\n", sumOfScores / 2);

  return 0;
}
