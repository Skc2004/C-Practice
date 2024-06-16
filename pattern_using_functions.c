#include<stdio.h> 

void pattern(int n);

int main() 
{
    int n;
    printf("Enter the value of n :- \n");
    scanf("%d",&n);
    printf("The Pattern is as follows :- \n");
    pattern(n);
    return 0;
}

void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}