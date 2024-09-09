#include <stdio.h>

int main() {
  char letter;
  int index;
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  scanf("%c", &letter);

  for (int i = 0; i < 26; i++) {
    if (letter == alphabet[i])
      index = i + 1;
  }

  printf("%d\n", index);

  return 0;
}
