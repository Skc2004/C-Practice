#include<stdio.h> 

int main() 
{ 
    int sum=0;
    int n;
    printf("Enter the number :- \n");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        sum=sum+(n*i);
    }
    printf("The sum is : %d",sum);
    return 0;
}