// Program to Enter Employee Salary Records, using Structures. Create array of Structures
#include<stdio.h>
struct Employee{   
    int empId;
    char name[50];
    int salary;
};

void inputEmpRec(struct Employee emp[], int n){
    for(int i=0;i<n;i++){
        printf("\nEnter Details of Employee %d", i+1);
        printf("\n\tEnter Employee ID: ");
        scanf("%d", &emp[i].empId);
        getchar();

        printf("\tEnter Employee Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin); // "\n" character appended in string array

        printf("\tEnter Employee Salary: ");
        scanf("%d", &emp[i].salary);

    }
}
void displayRec(struct Employee emp[], int n){
    printf("---------------------------------\n");
    for(int i=0;i<n;i++){
        printf("Details of Employee %d", i+1);
        printf("\n\tEmployee ID: %d", emp[i].empId);
        printf("\n\tEmployee Name: %s", emp[i].name);
        printf("\tEmployee Salary: %d", emp[i].salary);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    inputEmpRec(emp, n);
    displayRec(emp, n);
    return 0;
}