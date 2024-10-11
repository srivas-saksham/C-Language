//To find area and perimeter of rectangle. Read input from user.
#include<stdio.h>
int main(){
    int l,w,a,p;
    printf("Enter Length & Width of the Rectangle: ");
    scanf("%d %d", &l,&w);
    a = l*w;
    p = 2*(l+w);
    
    printf("\nArea is %d\nPerimeter is %d", a,p);
    return 0;
}