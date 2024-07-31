#include <stdio.h>

int main(){
   int n, usrInput, in = 0, out = 0;

   scanf("%d", &n);

   for (int i = 0; i < n; i++){
      scanf("%d", &usrInput);
      if (usrInput >= 10 && usrInput <= 20)
         in++;
      else
         out++;
   }

   printf("%d in\n",in);
   printf("%d out\n", out);

   return 0;
}
