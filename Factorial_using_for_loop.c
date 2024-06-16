#include<stdio.h> 

int main() 
{
    int n;
    int fact=1;
    printf("Enter the number:- \n");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        fact=fact*i;
    }
    printf("The Factorial of the input number is : %d",fact);
    return 0;
}
