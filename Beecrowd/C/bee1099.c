#include <stdio.h>

int main(){
   int n, x, y, aux;
   
   scanf("%d",&n);

   for (int i = 0; i < n; i ++){
      scanf("%d %d", &x, &y);
      int total = 0;
      
      if (x > y){
         aux = x;
         x = y;
         y = aux;
      }

      for (int j = x + 1; j < y; j++){
         if (j % 2 != 0)
            total += j;
      }
      
      printf("%d\n", total);
   }

   return 0;
}
