#include<stdio.h> 

void change_value(int *a);

int main() 
{
    int a;
    printf("Enter the value of a :- \n");
    scanf("%d",&a);
    change_value(&a);
    printf("The changes value of a is : %d ",a);
    return 0;
}

void change_value(int *a)
{
    int x=*a;
    *a=(10)*(x);
}