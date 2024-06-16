#include<stdio.h> 

int main() 
{
    float p,y,r;
    printf("Enter the Principal amount :- \n");
    scanf("%f",&p);
    printf("Enter the number of Years :- \n");
    scanf("%f",&y);
    printf("Enter the Rate of Interest :- \n");
    scanf("%f",&r);
    float interest=(p*r*y)/100;
    float amount = interest+p;
    printf("The Interest is : %f",interest);
    printf("The Amount is : %f",amount);
    return 0;
}