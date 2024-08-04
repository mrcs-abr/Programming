#include <stdio.h>

int main(){ 
   int usrInput;
   
   while (1){
      scanf("%d", &usrInput);
      
      if (usrInput != 2002)
         printf("Senha Invalida\n");
      else{
         printf("Acesso Permitido\n");
         break;
      }
  
   }

   return 0;
}
