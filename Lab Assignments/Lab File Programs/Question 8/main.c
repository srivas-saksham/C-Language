//WAP to read temperature in Celcius and convert it to Farenheit and vice-versa. Display the results of the program
#include<stdio.h>
int farenheit(){
    float c,f;
    printf("Enter Temparature in Celcius: ");
    scanf("%f", &c);
    f = (9.0/5.0*c)+32;
    printf("%.2f*C is %.2f*F", c,f);
}
int celcius(){
    float c,f;
    printf("Enter Temparature in Farenheit: ");
    scanf("%f", &f);
    c = (5.0/9.0)*(f-32);
    printf("%.2f*F is %.2f*C", f,c);
}
int main(){
    int choice;
    printf("Would you Like to Input in Celcius of Farenheit? (c/f): ");
    scanf("%c", &choice);
    (choice == 'f')? celcius() : farenheit();
}
