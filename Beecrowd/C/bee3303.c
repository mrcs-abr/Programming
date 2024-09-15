#include <stdio.h>
#include <string.h>

int main() {
  char s[256];

  scanf("%s", s);

  if (strlen(s) < 10)
    printf("palavrinha\n");
  else
    printf("palavrao\n");

  return 0;
}
