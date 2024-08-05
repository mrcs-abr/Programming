#include <stdio.h>

int main() {
  int inter, gremio, newGrenal;
  int numberOfGrenais = 0, victoriesOfInter = 0, victoriesOfGremio = 0,
      nDraws = 0;

  while (1) {
    scanf("%d %d", &inter, &gremio);

    numberOfGrenais++;

    if (inter > gremio)
      victoriesOfInter++;
    else if (gremio > inter)
      victoriesOfGremio++;
    else
      nDraws++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &newGrenal);

    if (newGrenal == 2)
      break;
  }

  printf("%d grenais\n", numberOfGrenais);
  printf("Inter:%d\n", victoriesOfInter);
  printf("Gremio:%d\n", victoriesOfGremio);
  printf("Empates:%d\n", nDraws);

  if (victoriesOfInter > victoriesOfGremio)
    printf("Inter venceu mais\n");
  else if (victoriesOfGremio > victoriesOfInter)
    printf("Gremio venceu mais\n");
  else
    printf("Não houve vencedor\n");
}
