#include <stdio.h>

int main() {

  int age, totalAge, n = 0;
  float average;

  while (1) {
    scanf("%d", &age);

    if (age < 0)
      break;

    totalAge += age;
    n++;
  }

  average = totalAge / (float)n;
  printf("%.2f\n", average);

  return 0;
}
