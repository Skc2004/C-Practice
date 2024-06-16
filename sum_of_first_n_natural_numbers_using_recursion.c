#include<stdio.h> 

int sum(int n);

int main() 
{
    int n;
    printf("Enter the number of natural numbers :- \n");
    scanf("%d",&n);
    int s=sum(n);
    printf("The sum is : %d",s);
    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return sum(n-1)+n;
    
}