#include<stdio.h> 

int main() 
{
    int a=10;
    int *b=&a;
    printf("The address of variable a is : %u \n",b);
    printf("The value of a is : %d",*b);
    return 0;
}