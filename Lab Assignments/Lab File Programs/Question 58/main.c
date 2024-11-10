//Program to Enter Book Records using Structure
#include <stdio.h>
//Defining a Stucture
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int i;
    struct Book book1;
    printf("Enter Book's Title: ");
    fgets(book1.title, sizeof(book1.title), stdin);

    printf("Enter Book's Author: ");
    fgets(book1.author, sizeof(book1.author), stdin);

    printf("Enter Book's Price: ");
    scanf("%f", &book1.price);
    
    //Print all the entered book records
    printf("\nBook Records:\n");
    printf("Title: %s", book1.title);
    printf("Author: %s", book1.author);
    printf("Price: %.2f", book1.price);

    return 0;
}
