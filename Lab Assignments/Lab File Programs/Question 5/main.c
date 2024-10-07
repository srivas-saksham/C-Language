//WAP to read numbers for five subjects and print their sum and average.
#include<stdio.h>
int main(){
    int math,sci,hin,eng,it;
    int sum,avg;
    printf("Enter Maths Marks: ");
    scanf("%d", &math);
    printf("Enter Science Marks: ");
    scanf("%d", &sci);
    printf("Enter Hindi Marks: ");
    scanf("%d", &hin);
    printf("Enter English Marks: ");
    scanf("%d", &eng);
    printf("Enter Information Technology Marks: ");
    scanf("%d", &it);
    
    sum = math+sci+hin+eng+it;
    avg = sum/5;
    printf("Total Marks are %d and Average is %d", sum, avg);
    return 0;
}