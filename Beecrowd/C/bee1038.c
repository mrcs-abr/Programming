#include <stdio.h>

int main (){
    
    double prices[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int code, quantity;
    
    scanf("%d %d", &code, &quantity);
    printf("Total: R$ %.2lf\n", prices[code - 1] * quantity);

    return 0;
}
