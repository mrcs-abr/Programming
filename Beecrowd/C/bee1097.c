#include <stdio.h>

int main(){
   int aux = 7, j = 0; 

   for (int i = 1; i < 10; i += 2) {
      for (int j = aux; j > aux - 3; j--){
         printf("I=%d J=%d\n", i, j);
      }  
      aux += 2;
   }

   return 0;
}
