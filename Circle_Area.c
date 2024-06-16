#include<stdio.h> 

int main() 
{ 
    float r;
    printf("Enter the radius of the Circle :- \n");
    scanf("%f",&r);
    float area = 3.14*r*r;
    printf("The area of the circle is : %f",area);
    return 0;
}