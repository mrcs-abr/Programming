#include <stdio.h>

int main(){
   float usr_input;	
   int count = 0;

   for (int i = 0; i < 6; i++){
      scanf("%f", &usr_input);
      if (usr_input > 0)
         count++;	
   }
   
   printf("%d valores positivos\n", count);

   return 0;
}
