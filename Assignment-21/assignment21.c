#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data {
    char last_name[20];
    char first_name[20];
    int id;
    int ssn;
    char title[30];
};

struct employees {
    struct data employee1;
    struct data employee2;
} engineering_dept;

void main() {

    for(int i=0;i<2;i++){
        struct data *employee = &engineering_dept.employee1;

        if(i>0){
            employee = &engineering_dept.employee2;
        }

        printf("Enter the employee's first name: ");
        scanf("%s", &employee->first_name);

        printf("Enter the employee's last name: ");
        scanf("%s", &employee->last_name);

        printf("Enter the employee's id: ");
        scanf("%d", &employee->id);

        printf("Enter last 4 digits of employee's SSN number: ");
        scanf("%d", &employee->ssn);

        printf("Enter the job title of the employee: ");
        scanf("%s", &employee->title);

        
        puts("");
    }

    for(int i=0;i<2;i++){
        struct data *employee = &engineering_dept.employee1;
        if(i>0){
            employee = &engineering_dept.employee2;
        }

        printf("\nEmployee information for %s %s: ", employee->first_name, employee->last_name);
        printf("\nID: %d", employee->id);
        printf("\nSSN: %d", employee->ssn);
        printf("\nTitle: %s Engineer\n", employee->title);
    }

    return;
}