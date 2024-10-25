//WAP to read temperature in Celsius  and convert it to Fahrenheit  and vice-versa. Display the results of the program
#include<stdio.h>
int Fahrenheit (){
    float c,f;
    printf("Enter Temparature in Celsius : ");
    scanf("%f", &c);
    f = (9.0/5.0*c)+32;
    printf("%.2f*C is %.2f*F", c,f);
}
int Celsius (){
    float c,f;
    printf("Enter Temparature in Fahrenheit : ");
    scanf("%f", &f);
    c = (5.0/9.0)*(f-32);
    printf("%.2f*F is %.2f*C", f,c);
}
int main(){
    int choice;
    printf("Would you Like to Input in Celsius  of Fahrenheit ? (c/f): ");
    scanf("%c", &choice);
    (choice == 'f')? Celsius () : Fahrenheit ();
}
