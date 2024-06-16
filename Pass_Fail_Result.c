#include<stdio.h> 

int main() { 
    int maths, science, english;
    printf("Enter marks in Maths out of 100:- \n");
    scanf("%d",&maths);
    printf("Enter marks in Science out of 100:-\n");
    scanf("%d",&science);
    printf("Enter marks in English out of 100:-\n");
    scanf("%d",&english);
    double percentage=(maths+science+english)/3;
    if(percentage>= 40 && maths>=33 && science>=33 && english>=33)
    {
        printf("Passed with %f %",percentage);
    }
    else
    {
        printf("Failed with %f %",percentage);
    }
    return 0;
}