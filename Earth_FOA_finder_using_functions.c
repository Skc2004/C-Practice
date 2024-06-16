#include<stdio.h>
#include<math.h> 

double FOA(double mass, double radius);


int main() 
{
    double mass;
    double radius;
    printf("Enter the mass of the body (in kg) :- \n");
    scanf("%lf",&mass);
    printf("Enter the distance between the center of the body and the center of the earth :- \n");
    scanf("%lf",&radius);
    double foa=FOA(mass,radius);
    printf("The force of attraction is : %lf units",foa);
    return 0;
}

double FOA(double mass, double radius)
{
    double foa=((6.67430*pow(10,-11))*(5.972*pow(10,24))*mass)/(pow(radius,2));
    return foa;
}