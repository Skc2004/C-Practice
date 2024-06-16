#include<stdio.h> 


void avg(int a, int b,int c);


int main() 
{
    int a,b,c;
    printf("Enter the first number :- \n");
    scanf("%d",&a);
    printf("Enter the second number :- \n");
    scanf("%d",&b);
    printf("Enter the third number :- \n");
    scanf("%d",&c);
    avg(a,b,c);
    return 0;
}


void avg(int a,int b,int c)
{
    float average = (a+b+c)/3;
    printf("The Average of three numbers is : %f",average);
}