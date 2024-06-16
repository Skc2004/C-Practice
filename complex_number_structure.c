#include<stdio.h> 

typedef struct Complex_Number_parts_storer
{
    int a;
    int b;
}Complex_Number;

void display(Complex_Number c[5])
{
    int i=0;
    while (i<=4)
    {
        printf("The %dst Complex Number is: %d + %di \n",(i+1),c[i].a,c[i].b);
        i++;
    }
}

int main() 
{
    Complex_Number c [5];
    int i=0;
    while(i<=4)
    {
        printf("Enter the real part of the %dst Complex Number : ",i+1);
        scanf("%d",&c[i].a);
        printf("Enter the imaginary part of the %dst Complex Number : ",i+1);
        scanf("%d",&c[i].b);
        i++;
    }
    display(c);
    return 0;
}     