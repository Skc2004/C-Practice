#include<stdio.h> 

int main() 
{ 
    double income;
    double tax;
    printf("Enter your income in Lakhs:-\n");
    scanf("%lf",&income);
    if(income<2.5)
    {
        tax=0;
    }
    else if (income>=2.5 && income<5.0)
    {
        tax=0.05*(income*100000);
    }
    else if (income>=5.0 && income<10.0)
    {
        tax=0.2*(income*100000);
    }
    else
    {
        tax=0.3*(income*100000);
    }
    printf("Your Income Tax is : Rs. %lf",tax);
    return 0;
}