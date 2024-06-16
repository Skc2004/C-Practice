#include<stdio.h> 

int sum(int *a,int *b);
double average(int *a,int *b);

int main() 
{
   int a,b;
   printf("Enter the first number :- \n");
   scanf("%d",&a);
   printf("Enter the second number :- \n");
   scanf("%d",&b);
   printf("\n");
   int summation=sum(&a,&b);
   double avg=average(&a,&b);
   printf("The sum of the given two numbers is : %d\n",summation);
   printf("The average of the given two numbers is : %lf\n",avg);
    return 0;
}

int sum(int *a,int *b)
{
    return ((*a)+(*b));
}

double average(int *a,int *b)
{
    return (((*a)+(*b))/2);
}