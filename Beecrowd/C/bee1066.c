#include <stdio.h>

int main(){
   int usrInput = 0, even = 0, odd = 0, positive = 0, negative = 0;

   for (int i = 0; i < 5; i++){
       scanf("%d", &usrInput);
       if (usrInput % 2 == 0)
          even++;
       if (usrInput % 2 != 0)
          odd++;
       if (usrInput > 0)
          positive++;
       if (usrInput < 0)
          negative++;
   }

   printf("%d valor(es) par(es)\n", even);
   printf("%d valor(es) impar(es)\n", odd);
   printf("%d valor(es) positivo(s)\n", positive);
   printf("%d valor(es) negativo(s)\n", negative);

   return 0;
}
