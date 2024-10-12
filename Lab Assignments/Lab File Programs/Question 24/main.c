//To find nature of roots of quadratic equations
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,D;
    float root1, root2, realRoot, imgRoot;
    printf("Enter Coefficients a, b & c: ");
    scanf("%d%d%d",&a,&b,&c);

    D = (b*b)-4*a*c; // finding discriminant

    if(D > 0){
        printf("As D(%d) is Greater than 0\n", D);
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("The equation has Two Distinct real roots: %.2f and %.2f\n", root1, root2);
    }
    else if(D == 0){
        printf("As D(%d) is equal to 0\n", D);
        root1 = -b / (2 * a);
        printf("The equation has two equal real roots: %.2f\n", root1);
    }
    else{
        printf("As D(%d) is Less than 0\n", D);
        realRoot = -b / (2 * a);
        imgRoot = sqrt(-D) / (2 * a);
        printf("The equation has two complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realRoot, imgRoot, realRoot, imgRoot);
    }
    return 0;
}