// Program to define a Structure "Stores" and write a function update() to change the values of its members.
// Pass structure to the function and return
#include<stdio.h>
struct store{
    int storeID;
    char storeName[50];
    int storeItems;
    int storeRevenue;
};

struct store update(struct store aStore){
    int sID_Val, sItems_Val, sRevenue_val;

    printf("Update Store ID: ");
    scanf("%d", &aStore.storeID);
    getchar();

    printf("Update Store Name: ");
    fgets(aStore.storeName, sizeof(aStore.storeName), stdin);

    printf("Update No of Store Items: ");
    scanf("%d", &aStore.storeItems);

    printf("Update Store Revenue: ");
    scanf("%d", &aStore.storeRevenue);

    return aStore;
}

void printStruct(struct store aStore){
    printf("=========UPDATED VALUES=========\n");
    printf("Store ID: %d\n", aStore.storeID);
    printf("Store Name: %s", aStore.storeName);
    printf("Store Items: %d\n", aStore.storeItems);
    printf("Store Revenue: %d", aStore.storeRevenue);
}
int main(){
    int i;
    struct store aStore = {101,"A-One Store",2048,550551};
    aStore =  update(aStore);
    printStruct(aStore);
    return 0;
}

