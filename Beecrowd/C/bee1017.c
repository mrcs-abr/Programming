#include <stdio.h>

int main(){
   int spentTime, averageSpeed, distance;

   scanf("%d\n%d", &spentTime, &averageSpeed);
   distance = averageSpeed * spentTime;
   printf("%.3f\n", distance / 12.0);

   return 0;
}
