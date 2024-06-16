#include<stdio.h> 

int main() 
{
    int n;
    printf("Enter the number to be checked :- \n");
    scanf("%d",&n);
    if(n%97==0)
    {
        printf("The number %d is divisible by 97.",n);
    }
    else
    {
        printf("The number %d is not divisible by 97.",n);
    }
    return 0;
}