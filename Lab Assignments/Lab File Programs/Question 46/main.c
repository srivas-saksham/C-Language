//Program to generate reverse array for a given array.
#include<stdio.h>
int main(){
    int arr[50],arrDup[50],elm,i;
    printf("How Many Elements you want to Enter: ");
    scanf("%d", &elm);

    for(i=0;i<elm;i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=elm;i>=1;i--){
        arrDup[elm-i] = arr[i-1];
    }

    for(i=0;i<elm;i++){
        printf("%d ", arrDup[i]);
    }
    return 0;
}