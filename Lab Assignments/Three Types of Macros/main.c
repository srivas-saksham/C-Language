//Types of Macro Simple-Argumented-Nested
#include<stdio.h>
#define PROGPRINT printf("Program to find Area and Perimeter of Rectangle and VOLUME of Cuboid") //Simple Macro
#define RECTAREA(l,b) l*b                          //Argumented Macro
#define RECTPERIMETER(l,b) 2*(l+b)                 //Argumented Macro
#define CUBOIDVOLUME(h) RECTAREA(l,b)*h           //Nested Macro
void main(){
    PROGPRINT;
    int l,b,h;
    printf("\nEnter Length of Reactangle: ");
    scanf("%d", &l);
    printf("\nEnter Width of Reactangle: ");
    scanf("%d", &b);
    printf("\nEnter Height of Reactangle: ");
    scanf("%d", &h);

    printf("\nArea of Rectangle is %d", RECTAREA(l,b));
    printf("\nPerimeter of Rectangle is %d", RECTPERIMETER(l,b));
    printf("\nVolume of Rectangle is %d", CUBOIDVOLUME(h));
}
