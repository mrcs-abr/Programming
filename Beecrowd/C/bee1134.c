#include <stdio.h>

int main() {

  int usr_input, alcohol = 0, gasoline = 0, diesel = 0;

  while (1) {
    scanf("%d", &usr_input);

    if (usr_input == 1)
      alcohol += 1;
    else if (usr_input == 2)
      gasoline += 1;
    else if (usr_input == 3)
      diesel += 1;
    else if (usr_input == 4)
      break;
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcohol);
  printf("Gasolina: %d\n", gasoline);
  printf("Diesel: %d\n", diesel);

  return 0;
}
