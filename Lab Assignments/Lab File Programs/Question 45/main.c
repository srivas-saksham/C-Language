//Program to perform Linear search on an array.
#include<stdio.h>
int main(){
    int elm,arr[50],i,srch,flag;
    printf("How Many Elements you want to Enter: ");
    scanf("%d", &elm);

    for(i=0;i<elm;i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the Integer to Search: ");
    scanf("%d",&srch);

    for(i=0;i<elm;i++){
        if(arr[i] == srch){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("%d found at %d position", srch,i+1);
    }
    else{
        printf("%d not in Array!", srch);
    }
    return 0;
}