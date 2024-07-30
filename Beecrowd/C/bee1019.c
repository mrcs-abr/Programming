#include <stdio.h>

int main (){
   int sec_input, seconds, minutes, hours;

   scanf("%d", &sec_input);

   hours = sec_input / 3600;
   minutes = (sec_input % 3600) / 60;
   seconds = sec_input % 60; 
   
   printf("%d:%d:%d\n", hours, minutes, seconds);
   return 0;
}
