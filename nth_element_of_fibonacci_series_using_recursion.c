#include<stdio.h>

int fibonacci(int n);

int main() 
{
    int n;
    printf("Enter the value of n :- \n");
    scanf("%d",&n);
    int nth=fibonacci(n);
    printf("The n'th element of Fibonacci Series is : %d ",nth);
    return 0;
}

int fibonacci(int n)
{
    if(n>1)
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
    else if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
}