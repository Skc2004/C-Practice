#include<stdio.h> 


double cel_to_fah_converter(double cel);


int main() 
{
    double cel;
    printf("Enter the temperature in Celcius :-\n");
    scanf("%lf",&cel);
    printf("\n");
    printf("The temperature in Fahrenheit is : %f units fahrenheit",cel_to_fah_converter(cel));
    return 0;
}

double cel_to_fah_converter(double cel)
{
    double fah=273+cel;
    return fah;
}