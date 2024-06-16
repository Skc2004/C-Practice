#include<stdio.h> 

int main() 
{
    int i;
    printf("Enter the value of i :- \n");
    scanf("%d",&i);
    int *a=&i;
    int **b=&a;
    printf("The value is : %u.",*(*b));
    return 0;
}