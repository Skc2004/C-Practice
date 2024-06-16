#include<stdio.h> 

int main() 
{
    float r,h;
    printf("Enter the radius of Cylinder :- \n");
    scanf("%f",&r);
    printf("Enter the height of Cylinder :- \n");
    scanf("%f",&h);
    float volume = 3.14*r*r*h;
    printf("The Volume of the Cyclinder is : %f",volume);
    return 0;
}