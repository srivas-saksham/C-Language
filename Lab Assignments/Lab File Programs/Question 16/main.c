/*WAP to read from user the values for 3 products (item_no, quantity, price). 
Find the total bill value and display. 
Also, allow a discount of 10% on the total bill and display net bill value*/
#include<stdio.h>
int main(){
    int prod1[3], prod2[3],prod3[3];
    int i,j,bill,netBill;
    for(i=0;i<3;i++){
        printf("Enter Details for Product %d\n", i+1);
        if(i==0){
            printf("  Enter Item-Number, Quantity & Price: ");
            scanf("%d %d %d", &prod1[0], &prod1[1], &prod1[2]);
        }
        else if(i==1){
            printf("  Enter Item-Number, Quantity & Price: ");
            scanf("%d %d %d", &prod2[0], &prod2[1], &prod2[2]);
        }
        else if(i==2){
            printf("  Enter Item-Number, Quantity & Price: ");
            scanf("%d %d %d", &prod3[0], &prod3[1], &prod3[2]);
        }
    }
    bill = prod1[2] + prod2[2] + prod3[2]; // total bill value
    netBill = bill-bill*0.1;               // net bill value
    printf("Total Bill: %d\n", bill);
    printf("Net Bill: %d", netBill);
    return 0;
}
