#include <stdio.h>

int main(){
   int n;
   float n1, n2, n3, average = 0;

   scanf("%d", &n);

   for (int i = 0; i < n; i++){
      scanf("%f %f %f", &n1, &n2, &n3);
      average = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
      printf("%.1f\n", average);
   }

   return 0;
}
