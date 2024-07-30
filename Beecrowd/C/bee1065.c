#include <stdio.h>

int main(){
   int usrInput;
   int count = 0;

   for (int i = 0; i < 5; i++){
      scanf("%d", &usrInput);
      if (usrInput % 2 == 0)
         count ++;
   }
   
   printf("%d valores pares\n", count);

   return 0;
}
