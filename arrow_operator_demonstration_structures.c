#include<stdio.h> 

typedef struct employee_details
{
    int code;
    float salary;
    char name[50];
}emp;


int main() 
{
    emp e1;
    emp *ptr;
    ptr =&e1;
    printf("Enter the Employee name :- \n");
    scanf("%s",ptr-> name);
    printf("Enter the Employee code :- \n");
    scanf("%d",&ptr-> code);
    printf("Enter the Employee Salary :- \n");
    scanf("%f",&ptr-> salary);
    printf("\n");
    printf("Employee Name: %s\n",ptr-> name);
    printf("Employee Code: %d\n",ptr-> code);
    printf("Employee Salary: %f\n",ptr-> salary);
    return 0;
}