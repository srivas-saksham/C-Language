/*To find electricity charges based on consumption
 Consumption Units Rate of Charge
 0 – 200 Rs. 0.50 per unit
 201 – 400 Rs. 100 plus Rs. 0.65 per unit excess of 200
 401 – 600 Rs. 230 plus Rs. 0.80 per unit excess of 400
 601 and above Rs. 390 plus Rs. 1.00 per unit excess of 600*/
#include <stdio.h>
int main(){
    int units;
    float totalCharge;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        totalCharge = units * 0.50;
    }
    else if (units <= 400) {
        totalCharge = 100 + (units - 200) * 0.65;
    }
    else if (units <= 600) {
        totalCharge = 230 + (units - 400) * 0.80;
    }
    else {
        totalCharge = 390 + (units - 600) * 1.00;
    }

    printf("Total electricity charge: Rs. %.2f\n", totalCharge);
    return 0;
}
