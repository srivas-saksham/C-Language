//Program using pointer to read array elements and give there Sum
#include<stdio.h>
int main(){
    int len,i,sum=0;
    printf("Enter No of Elements in Array: ");
    scanf("%d",&len);

    int arr[len];
    int *ptr = arr;
    for(i=0;i<len;i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<len;i++){
        sum += *(ptr+i);
    }
    printf("Sum of Elements of Array is %d", sum);
    return 0;
}