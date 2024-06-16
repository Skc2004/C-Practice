#include<stdio.h> 

void addressPrinter(int a);

int main() 
{
    int a;
    printf("Enter the value of a:- \n");
    scanf("%d",&a);
    printf("The address of a before value pass to function is : %u \n",&a);
    addressPrinter(a);
    return 0;
}

void addressPrinter(int a)
{
    printf("The address of a after value pass to function is : %u \n",&a);
}