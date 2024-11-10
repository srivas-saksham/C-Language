// Program to find a root using bisection method
#include<stdio.h>
#include<math.h>

double f( double x){
    return 3*(x*x*x) + 8*(x*x) + 8*x - 5; // change equation here-----------------------------------------------------------------------------------------
}
void bisection(double rng, int iterNo){
    printf("iterNo is %d\n", iterNo);
    double c, fn;
    double a = rng, b = rng-1;
    for(int i=0;i<iterNo;i++){
        c = (a + b)/2;

        if(f(c) * f(a) < 0){
            b = c;
        }
        else{
            a = c;
        }
        printf("\nf(%f) on %d iteration is: %.4f", c, i+1, f(c));
        printf("\nApproximate root after %d iterations is: %.4f\n", i+1, c);
    }
}
double range(){
    double fnCurr,fnPrev=0;
    for(double i=0;i>=0;i++){
        fnCurr = f(i);
        printf("%f ", fnCurr);
        if((fnPrev > 0 && fnCurr < 0) || (fnPrev < 0 && fnCurr > 0)){
            printf("\nI is %f \n", i);
            return i;
        }
        fnPrev = fnCurr;
    }
}
void main(){
    int highI;
    int iterNo;
    printf("Number of Iterations: ");
    scanf("%d", &iterNo);
    printf("iterNo is %d\n", iterNo);
    highI = range();
    bisection(highI, iterNo);
}