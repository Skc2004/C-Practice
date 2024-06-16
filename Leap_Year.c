#include<stdio.h> 

int main() 
{
    int year;
    printf("Enter the year to be checked :- \n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is a not Leap Year",year);
    }
    return 0;
}